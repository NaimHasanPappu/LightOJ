#include<bits/stdc++.h>
 
using namespace std;
 
#define Pair pair < int , pair < string , string > >
 
map <string , string> parent;
 
map <string , int> visit;
 
string Root(string s){
   
    while(parent[s]!=s){
       
        parent[s]=parent[parent[s]];
       
        s=parent[s];
    }
   
    return s;
}
 
void Union(string a,string b){
   
    string A=Root(a);
   
    string B=Root(b);
   
    parent[A]=parent[B];
}
 
int main(){
   
    int T;
   
    cin>>T;
   
    for(int t=0; t<T; t+=1){
       
        int m;
       
        cin>>m;
       
        vector <Pair> arr;
       
        vector <string> city;
       
        parent.clear();
       
        visit.clear();
       
        for(int i=0; i<m; i+=1){
           
            string c1,c2;
           
            cin>>c1>>c2;
           
            parent[c1]=c1;
           
            parent[c2]=c2;
           
            if(visit[c1]==0){
               
                city.push_back(c1);
               
                visit[c1]=1;
            }
           
            if(visit[c2]==0){
               
                city.push_back(c2);
               
                visit[c2]=1;
            }
           
            int c3;
           
            cin>>c3;
           
            arr.push_back(make_pair(c3,make_pair(c2,c1)));
        }
       
        sort(arr.begin(),arr.end());
       
        int Max=0;
       
        for(int i=0; i<m; i+=1){
           
            string u=arr[i].second.first;
           
            string v=arr[i].second.second;
           
            int w=arr[i].first;
           
            if(Root(u)!=Root(v)){
               
                Union(u,v);
               
                Max+=w;
            }
        }
       
        int l=city.size();
       
        int c=0;
       
        for(int i=0; i<l; i+=1){
           
            string s=city[i];
           
            if(parent[s]==s){
               
                c+=1;
            }
        }
       
        printf("Case %d: ",t+1);
       
        if(c==1){
           
            cout<<Max;
        }
       
        else{
           
            printf("Impossible");
        }
       
        cout<<endl;
    }
}

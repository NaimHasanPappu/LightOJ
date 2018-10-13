#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
   
    int t;
   
    cin>>t;
   
    for(int i=1; i<=t; i+=1){
       
        int P,Q;
       
        cin>>P>>Q;
       
        vector <int> arr;
       
        for(int j=0; j<P; j+=1){
           
            int x;
           
            cin>>x;
           
            arr.push_back(x);
        }
       
        int l=arr.size();
       
        for(int j=0; j<Q; j+=1){
           
            char ch;
           
            cin>>ch;
           
            if(ch=='S'){
               
                int d;
               
                cin>>d;
               
                for(int k=0; k<l; k+=1){
                   
                    arr[k]+=d;
                }
            }
           
            else if(ch=='M'){
               
                int d;
               
                cin>>d;
               
                for(int k=0; k<l; k+=1){
                   
                    arr[k]*=d;
                }
            }
           
            else if(ch=='D'){
               
                int d;
               
                cin>>d;
               
                for(int k=0; k<l; k+=1){
                   
                    arr[k]/=d;
                }
            }
           
            else if(ch=='R'){
               
                reverse(arr.begin(),arr.end());
            }
           
            else if(ch=='P'){
               
                int x,y;
               
                cin>>x>>y;
               
                swap(arr[x],arr[y]);
            }
        }
       
        cout<<"Case "<<i<<":\n";
       
        cout<<arr[0];
       
        for(int j=1; j<l; j+=1){
           
            cout<<" "<<arr[j];
        }
       
        cout<<endl;
    }
}

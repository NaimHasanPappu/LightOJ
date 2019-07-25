#include<bits/stdc++.h>
 
 
using namespace std;
 
 
int main(){
   
   
    int t;
   
   
    cin>>t;
   
    for(int k=0; k<t; k+=1){
       
       
        int h;
       
       
        cin>>h;
       
       
        vector<int>vec[20001];
   
   
        int i;
   
   
        for(i=0; i<h; i+=1){
       
       
            int u,v;
       
       
            cin>>u>>v;
       
       
            vec[u].push_back(v);
           
           
            vec[v].push_back(u);
        }
   
   
        int visit[20001];
   
   
        for(i=0; i<20001; i+=1){
       
       
            visit[i]=0;
        }
   
   
        queue <int> q;
   
   
        int sum=0;
   
   
        for(int j=1; j<=20000; j+=1){
       
       
            int ln=vec[j].size();
       
       
            if(ln!=0){
       
       
                if(visit[j]==0){
               
       
                    q.push(j);
               
                   
                    visit[j]=1;
               
                   
                    int ly=0,vam=0;
               
                   
                    while(!q.empty()){
                   
                       
                        int x=q.front();
                   
                       
                        if(visit[x]==1){
                       
                           
                            ly+=1;
                        }
                       
                   
                        else if(visit[x]==-1){
                       
                           
                            vam+=1;
                        }
                   
                       
                        q.pop();
                   
                       
                        int l=vec[x].size();
                   
                       
                        if(l>0){
                       
                       
                            for(i=0; i<l; i+=1){
                               
                                if(visit[vec[x][i]]==0){
                                   
                                   
                                    q.push(vec[x][i]);
                           
                               
                                    if(visit[x]==1){
                               
                                   
                                        visit[vec[x][i]]=-1;
                                    }
                               
                           
                                    else if(visit[x]==-1){
                               
                                   
                                        visit[vec[x][i]]=1;
                                    }
                                }
                            }
                        }
                    }
                   
                   
                    if(ly>=vam){
                   
                   
                        sum+=ly;
                    }
               
               
                    else{
                   
                        sum+=vam;
                    }
                }
            }
        }
   
   
    cout<<"Case "<<k+1<<": "<<sum<<endl;
    }
}

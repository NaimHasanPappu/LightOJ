#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
   
    int t;
   
    cin>>t;
   
    for(int T=0; T<t; T+=1){
       
        int N,M;
       
        cin>>N>>M;
       
        vector <int> adj[N+1],cost[N+1];
       
        while(M--){
           
            int u,v,w;
           
            cin>>u>>v>>w;
           
            adj[u].push_back(v);
           
            adj[v].push_back(u);
           
            cost[u].push_back(w);
           
            cost[v].push_back(w);
        }
       
        int dist[N+1];
       
        for(int i=1; i<=N; i+=1){
           
            dist[i]=-1;
        }
       
        priority_queue <int> p;
       
        p.push(1);
       
        dist[1]=0;
       
        while(!p.empty()){
           
            int u=p.top();
           
            p.pop();
           
            int l=adj[u].size();
           
            for(int i=0; i<l; i+=1){
               
                int v=adj[u][i];
               
                if(dist[v]==-1 || dist[v]>dist[u]+cost[u][i]){
                   
                    dist[v]=dist[u]+cost[u][i];
                   
                    p.push(v);
                }
            }
        }
       
        cout<<"Case "<<T+1<<": ";
       
        if(dist[N]==-1){
           
            cout<<"Impossible";
        }
       
        else{
           
            cout<<dist[N];
        }
       
        cout<<endl;
    }
}

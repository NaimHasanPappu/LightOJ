#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
   
    int T;
   
    cin>>T;
   
    for(int t=0; t<T; t+=1){
       
        map < int,vector<int> > adj;
       
        map < int,int > visit,city;
       
        vector <int> city_list;
       
        int K,N,M;
       
        cin>>K>>N>>M;
       
        for(int i=0; i<K; i+=1){
           
            int c;
           
            cin>>c;
           
            city_list.push_back(c);
           
            city[c] += 1;
        }
       
        for(int i=0; i<M; i+=1){
           
            int u,v;
           
            cin>>u>>v;
           
            adj[u].push_back(v);
        }
       
        for(int j=0; j<K; j+=1){
           
            visit.clear();
           
            queue <int> q;
           
            q.push(city_list[j]);
           
            visit[city_list[j]] = 1;
           
            while(!q.empty()){
               
                int u = q.front();
               
                q.pop();
               
                int l = adj[u].size();
               
                for(int i=0; i<l; i+=1){
                   
                    int v = adj[u][i];
                   
                    if(visit[v] == 0){
                       
                        q.push(v);
                       
                        visit[v] = 1;
                       
                        city[v] += 1;
                    }
                }
            }
        }
       
        int ans=0;
       
        for(int i=1; i<=N; i+=1){
           
            if(city[i] == K){
               
                ans+=1;
            }
        }
       
        printf("Case %d: %d\n",t+1,ans);
    }
}

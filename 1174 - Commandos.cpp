#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int T;
	
	cin>>T;
	
	for(int t=0; t<T; t+=1){
		
		int N,R;
		
		cin>>N>>R;
		
		vector <int> adj[N];
		
		for(int i=0; i<R; i+=1){
			
			int u,v;
			
			cin>>u>>v;
			
			adj[u].push_back(v);
			
			adj[v].push_back(u);
		}
		
		int s,d;
		
		cin>>s>>d;
		
		vector <int> visit,cost1,cost2;
		
		for(int i=0; i<N; i+=1){
			
			visit.push_back(0);
			
			cost1.push_back(0);
			
			cost2.push_back(0);
		}
		
		queue <int> q;
		
		q.push(s);
		
		visit[s]=1;
		
		while(!q.empty()){
			
			int u=q.front();
			
			q.pop();
			
			int n=adj[u].size();
			
			for(int i=0; i<n; i+=1){
				
				int v=adj[u][i];
				
				if(visit[v]==0){
					
					visit[v]=1;
					
					cost1[v]=cost1[u]+1;
					
					q.push(v);
				}
			}
		}
		
		for(int i=0; i<N; i+=1){
			
			visit[i]=0;
		}
		
		q.push(d);
		
		visit[d]=1;
		
		while(!q.empty()){
			
			int u=q.front();
			
			q.pop();
			
			int n=adj[u].size();
			
			for(int i=0; i<n; i+=1){
				
				int v=adj[u][i];
				
				if(visit[v]==0){
					
					visit[v]=1;
					
					cost2[v]=cost2[u]+1;
					
					q.push(v);
				}
			}
		}
		
		int Max=0;
		
		for(int i=0; i<N; i+=1){
			
			Max=max(Max,cost1[i]+cost2[i]);
		}
		
		printf("Case %d: %d\n",t+1,Max);
	}
}

#include<bits/stdc++.h>

using namespace std;

#define Pair pair < int , pair < int , int > >

vector <int> root,visit,dist;

void build(int n){
	
	root.clear();
	
	visit.clear();
	
	dist.clear();
	
	for(int i=0; i<=n; i+=1){
		
		root.push_back(i);
		
		visit.push_back(0);
		
		dist.push_back(-1);
	}
}

int Root(int x){
	
	while(root[x]!=x){
		
		root[x]=root[root[x]];
		
		x=root[x];
	}
	
	return x;
}

void Union(int x,int y){
	
	int X=Root(x);
	
	int Y=Root(y);
	
	root[X]=root[Y];
}

int main(){
	
	int T;
	
	scanf("%d",&T);
	
	for(int t=0; t<T; t+=1){
		
		int n,m;
		
		scanf("%d %d",&n,&m);
		
		build(n);
		
		vector <Pair> arr;
		
		vector <int> adj[n],cost[n];
		
		for(int i=0; i<m; i+=1){
			
			int u,v,w;
			
			scanf("%d %d %d",&u,&v,&w);
			
			arr.push_back(make_pair(w,make_pair(u,v)));
		}
		
		sort(arr.begin(),arr.end());
		
		for(int i=0; i<m; i+=1){
			
			int n1=arr[i].second.first;
			
			int n2=arr[i].second.second;
			
			int n3=arr[i].first;
			
			if(Root(n1)!=Root(n2)){
				
				Union(n1,n2);
				
				adj[n1].push_back(n2);
				
				adj[n2].push_back(n1);
				
				cost[n1].push_back(n3);
				
				cost[n2].push_back(n3);
			}
		}
		
		int start;
		
		scanf("%d",&start);
		
		visit[start]=1;
		
		dist[start]=0;
		
		queue <int> q;
		
		q.push(start);
		
		while(!q.empty()){
			
			int u=q.front();
			
			q.pop();
			
			int l=adj[u].size();
			
			for(int i=0; i<l; i+=1){
				
				int v=adj[u][i];
				
				if(visit[v]==0){
					
					dist[v]=max(dist[u],cost[u][i]);
					
					visit[v]=1;
					
					q.push(v);
				}
			}
		}
		
		printf("Case %d:\n",t+1);
		
		for(int i=0; i<n; i+=1){
			
			if(dist[i]==-1){
				
				cout<<"Impossible";
			}
			
			else{
				
				cout<<dist[i];
			}
			
			cout<<endl;
		}
	}
}

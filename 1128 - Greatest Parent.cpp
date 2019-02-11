#include<bits/stdc++.h>

using namespace std;

#define N 100001

long long int value[N];

int parent[N];

int sparse[N][20];

int main(){
	
	int T;
	
	scanf("%d",&T);
	
	for(int t=0; t<T; t+=1){
		
		memset(sparse,-1,sizeof(sparse));
		
		int n,q;
		
		scanf("%d %d",&n,&q);
		
		value[0] = 1;
		
		for(int i=1; i<n; i+=1){
			
			int p;
			
			long long int w;
			
			scanf("%d %lld",&p,&w);
			
			parent[i] = p;
			
			value[i] = w;
		}
		
		for(int i=0; i<=n; i+=1){
		
			sparse[i][0] = parent[i];
		}
	
		for(int j=1; j<20; j+=1){
		
			for(int i=0; i<=n; i+=1){
			
				if(sparse[i][j-1] != -1){
				
					int k = sparse[i][j-1];
				
					sparse[i][j] = sparse[k][j-1];
				}
			}
		}
		
		printf("Case %d:\n",t+1);
		
		while(q--){
			
			int u,v;
			
			scanf("%d %lld",&u,&v);
			
			for(int i=19; i>=0; i-=1){
		
				if((sparse[u][i] != -1) && (value[sparse[u][i]] >= v)){
			
					u = sparse[u][i];
				}
			}
			
			printf("%d\n",u);
		}
	}
}

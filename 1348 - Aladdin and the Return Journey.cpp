#include<bits/stdc++.h>

using namespace std;

#define lli long long int

vector <int> Adj[30005];

int Parent[30005],Depth[30005],Heavy[30005],Size[30005],Head[30005],Position[30005],Chain[30005],Array[30005],Value[30005],Tree[4*30005];

void Processing(int n){
	
	for(int i=0; i<=4*(n+2); i+=1){
		
		Tree[i] = -1;
	}
	
	for(int i=0; i<=n; i+=1){
		
		Adj[i].clear();
		
		Parent[i] = -1;
		
		Depth[i] = 0;
		
		Size[i] = 1;
		
		Heavy[i] = -1;
		
		Head[i] = -1;
		
		Position[i] = -1;
		
		Chain[i] = -1;
		
		Value[i] = -1;
		
		Array[i] = -1;
	}
}

void BFS(int root){
			
	queue <int> q;
	
	q.push(root);
	
	stack <int> stk;
	
	while(!q.empty()){
		
		int u = q.front();
		
		q.pop();
		
		stk.push(u);
		
		int l = Adj[u].size();
		
		for(int i=0; i<l; i+=1){
			
			int v = Adj[u][i];
			
			if(v != Parent[u]){
				
				q.push(v);
				
				Parent[v] = u;
				
				Depth[v] = Depth[u]+1;
			}
		}
	}
	
	while(!stk.empty()){
		
		int u = stk.top();
		
		int v = Parent[u];
		
		stk.pop();
		
		Size[v] += Size[u];
		
		if(Heavy[v] == -1 || Size[u] > Size[Heavy[v]]){
			
			Heavy[v] = u;
		}
	}
}

void Decompose(int n){
			
	BFS(1);
	
	int c=0, index=0;
			
	for(int i=1; i<=n; i+=1){
				
		if((Parent[i] == -1) || (Heavy[Parent[i]] != i)){
			
			c+=1;
					
			for(int k=i; k != -1; k = Heavy[k]){
						
				Chain[k] = c;
				
				Head[k] = i;
				
				index += 1;
				
				Position[k] = index;
				
				Array[index] = Value[k];
			}
		}
	}
}
		
void Build(int n,int b,int e){
			
	if(b>e){
				
		return;
	}
			
	if(b == e){
				
		Tree[n] = Array[b];
				
		return;
	}
			
	int l = n*2;
			
	int r = l+1;
			
	int m = (b+e) / 2;
			
	Build(l,b,m);
			
	Build(r,m+1,e);
			
	Tree[n] = Tree[l]+Tree[r];
}
		
lli Query1(int n, int b, int e, int i, int j){
			
	if(b>e || b>j || e<i){
				
		return 0;
	}
			
	if(b>=i && e<=j){
				
		return (lli)(Tree[n]);
	}
			
	int l = n*2;
			
	int r = l+1;
			
	int m = (b+e) / 2;
			
	int ql = Query1(l,b,m,i,j);
			
	int qr = Query1(r,m+1,e,i,j);
			
	return (lli)(ql+qr);
}

void Update(int n,int b,int e,int i,int v){
	
	if(b>e || b>i || e<i){
		
		return;
	}
	
	if(b>=i && e<=i){
		
		Tree[n] = v;
		
		return;
	}
	
	int l = n*2;
	
	int r = l+1;
	
	int m = (b+e) / 2;
	
	Update(l,b,m,i,v);
	
	Update(r,m+1,e,i,v);
	
	Tree[n] = Tree[l]+Tree[r];
}

int LCA(int u , int v){
	
	while(Chain[u] != Chain[v]){
		
		if(Depth[Head[u]] > Depth[Head[v]]){
			
			u = Parent[Head[u]];
		}
		
		else{
			
			v = Parent[Head[v]];
		}
	}
	
	return Depth[u] < Depth[v] ? u : v;
}
		
lli Query2(int n,int x,int y){
			
	lli Ans=0;
			
	int z = LCA(x,y);
			
	while(1){
				
		if(Chain[x] == Chain[z]){
			
			int i = Position[x];
			
			int j = Position[z];
			
			if(i>j){
				
				swap(i,j);
			}
					
			Ans += Query1(1,1,n,i,j);
					
			break;
		}
				
		else{
			
			int i = Position[x];
			
			int j = Position[Head[x]];
			
			if(i>j){
				
				swap(i,j);
			}
					
			Ans += Query1(1,1,n,i,j);
					
			x = Parent[Head[x]];
		}
	}
			
	
	while(1){
				
		if(Chain[y] == Chain[z]){
			
			int i = Position[y];
			
			int j = Position[z];
			
			if(i>j){
				
				swap(i,j);
			}
					
			Ans += Query1(1,1,n,i,j);
					
			break;
		}
				
		else{
			
			int i = Position[y];
			
			int j = Position[Head[y]];
			
			if(i>j){
				
				swap(i,j);
			}
					
			Ans += Query1(1,1,n,i,j);
					
			y = Parent[Head[y]];
		}
	}
			
	return (lli)(Ans-Value[z]);
}

int main(){
	
	int T;
	
	scanf("%d",&T);
	
	for(int t=1; t<=T; t+=1){
	
		int n;
		
		scanf("%d",&n);
		
		Processing(n);
		
		for(int i=1; i<=n; i+=1){
			
			scanf("%d",&Value[i]);
		}
		
		for(int i=1; i<n; i+=1){
			
			int u,v;
			
			scanf("%d %d",&u,&v);
			
			Adj[u+1].push_back(v+1);
			
			Adj[v+1].push_back(u+1);
		}
		
		Decompose(n);
		
		Build(1,1,n);
		
		int q;
		
		scanf("%d",&q);
		
		printf("Case %d:\n",t);
		
		while(q--){
			
			int k;
			
			scanf("%d",&k);
			
			if(k == 1){
				
				int i,v;
				
				scanf("%d %d",&i,&v);
				
				Value[i+1] = v;
				
				i = Position[i+1];
				
				Update(1,1,n,i,v);
			}
			
			else{
				
				int i,j;
				
				scanf("%d %d",&i,&j);
				
				printf("%lld\n",Query2(n,i+1,j+1));
			}
		}
	}
}

#include<bits/stdc++.h>

using namespace std;

#define Pair pair < int , pair < int , int > >

vector <int> parent;

void Clear(int n){
	
	parent.clear();
	
	for(int i=0; i<=n; i+=1){
		
		parent.push_back(i);
	}
}

int Root(int y){
	
	while(parent[y]!=y){
		
		parent[y]=parent[parent[y]];
		
		y=parent[y];
	}
	
	return y;
}

void Union(int a,int b){
	
	int A=Root(a);
	
	int B=Root(b);
	
	parent[A]=parent[B];
}

void Kruskal(){
	
	int T;
	
	cin>>T;
	
	for(int t=0; t<T; t+=1){
		
		int n;
		
		cin>>n;
		
		Clear(n);
		
		int arr[n+1][n+1];
		
		vector <Pair> A;
		
		int Total1=0,Total2=0;
		
		for(int i=1; i<=n; i+=1){
			
			for(int j=1; j<=n; j+=1){
				
				cin>>arr[i][j];
				
				Total1+=arr[i][j];
				
				if(arr[i][j]>0){
					
					A.push_back(make_pair(arr[i][j],make_pair(i,j)));
				}
			}
		}
		
		sort(A.begin(),A.end());
		
		for(int i=0; i<A.size(); i+=1){
			
			int w=A[i].first;
			
			int u=A[i].second.first;
			
			int v=A[i].second.second;
			
			if(Root(u)!=Root(v)){
					
				Union(u,v);
					
				Total2+=w;
			}
		}
		
		int c=0;
		
		for(int i=1; i<=n; i+=1){
			
			if(parent[i]==i){
				
				c+=1;
			}
		}
		
		printf("Case %d: ",t+1);
		
		if(c>1){
			
			cout<<"-1";
		}
		
		else{
			
			cout<<Total1-Total2;
		}
		
		cout<<endl;
	}
}

int main(){
	
	Kruskal();
}

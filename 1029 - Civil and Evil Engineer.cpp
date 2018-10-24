#include<bits/stdc++.h>

using namespace std;

#define wab pair < int , pair < int , int > >

vector <wab> arr;

vector <int> root1,root2;

void Reset(){
	
	root1.clear();
	
	root2.clear();
	
	arr.clear();
}

void Root(int n){
	
	for(int i=0; i<=n; i+=1){
		
		root1.push_back(i);
		
		root2.push_back(i);
	}
}

int find_root(int n,vector<int> &root){
	
	while(root[n]!=n){
		
		root[n]=root[root[n]];
		
		n=root[n];
	}
	
	return n;
}

void Union(int a,int b,vector<int> &root){
	
	int A=find_root(a,root);
	
	int B=find_root(b,root);
	
	root[A]=root[B];
}

int main(){
	
	int T;
	
	scanf("%d",&T);
	
	for(int t=0; t<T; t+=1){
		
		Reset();
		
		int n;
		
		scanf("%d",&n);
		
		Root(n);
		
		while(1){
			
			int u,v,w;
			
			scanf("%d %d %d",&u,&v,&w);
			
			if(u==0 && v==0 && w==0){
				
				break;
			}
			
			arr.push_back(make_pair(w,make_pair(u,v)));
		}
		
		sort(arr.begin(),arr.end());
		
		int l=arr.size();
		
		int MinCost=0;
		
		for(int i=0; i<l; i+=1){
			
			int u,v,w;
			
			w=arr[i].first;
			
			u=arr[i].second.first;
			
			v=arr[i].second.second;
			
			if(find_root(u,root1)!=find_root(v,root1)){
				
				Union(u,v,root1);
				
				MinCost+=w;
			}
		}
		
		reverse(arr.begin(),arr.end());
		
		int MaxCost=0;
		
		for(int i=0; i<l; i+=1){
			
			int u,v,w;
			
			w=arr[i].first;
			
			u=arr[i].second.first;
			
			v=arr[i].second.second;
			
			if(find_root(u,root2)!=find_root(v,root2)){
				
				Union(u,v,root2);
				
				MaxCost+=w;
			}
		}
		
		printf("Case %d: ",t+1);
		
		int Cost=MaxCost+MinCost;
		
		if(Cost&1){
			
			printf("%d/2",Cost);
		}
		
		else{
			
			printf("%d",Cost/2);
		}
		
		cout<<endl;
	}
}

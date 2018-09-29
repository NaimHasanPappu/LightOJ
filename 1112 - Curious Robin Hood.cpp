#include<bits/stdc++.h>

using namespace std;

#define V vector < int >

V tree,arr;

void update ( int size , int index , int value ){
	
	while ( index<=size ){
		
		tree[index] += value;
		
		index += ((index) & (-index));
	}
}

int query ( int index ){
	
	int sum=0;
	
	while ( index > 0 ){
		
		sum += tree[index];
		
		index -= ((index) & (-index));
	}
	
	return sum;
}

void build ( int n ){
	
	arr.clear();
	
	tree.clear();
	
	for(int i=0; i<=n; i+=1){
	
		arr.push_back(0);
	
		tree.push_back(0);
	}
}

int main(){
	
	int T;
	
	scanf("%d",&T);
	
	for(int t=0; t<T; t+=1){
	
		int n,q;
		
		scanf("%d %d",&n,&q);
		
		build ( n );
		
		for(int i=1; i<=n; i+=1){
			
			int N;
			
			scanf("%d",&N);
			
			update(n,i,N);
			
			arr[i]=N;
		}
		
		printf("Case %d:\n",t+1);
		
		while(q--){
			
			int i,j,k;
			
			scanf("%d",&k);
			
			if(k==1){
				
				scanf("%d",&i);
				
				i+=1;
				
				printf("%d\n",arr[i]);
				
				int v=-arr[i];
				
				arr[i]=0;
				
				update(n,i,v);
			}
			
			else if(k==2){
				
				scanf("%d %d",&i,&j);
				
				i+=1;
				
				arr[i]+=j;
				
				update(n,i,j);
			}
			
			else if(k==3){
				
				scanf("%d %d",&i,&j);
				
				j+=1;
				
				printf("%d\n",query(j)-query(i));
			}
		}
	}
}

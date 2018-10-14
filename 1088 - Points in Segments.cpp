#include<bits/stdc++.h>

using namespace std;

int arr[100001];

int binary(int b,int e,int i,int j){
	
	if(b>e || arr[e]<i || arr[b]>j){
		
		return 0;
	}
	
	if(arr[b]>=i && arr[e]<=j){
		
		return (e-b+1);
	}
	
	int m=(b+e)>>1;
	
	int b1=binary(b,m,i,j);
	
	int b2=binary(m+1,e,i,j);
	
	return b1+b2;
}

int main(){
	
	int T;
	
	scanf("%d",&T);
	
	for(int t=0; t<T; t+=1){
		
		int n,q;
		
		scanf("%d %d",&n,&q);
		
		for(int i=1; i<=n; i+=1){
			
			scanf("%d",&arr[i]);
		}
		
		printf("Case %d:\n",t+1);
		
		while(q--){
			
			int i,j;
			
			scanf("%d %d",&i,&j);
			
			int result=binary(1,n,i,j);
			
			printf("%d\n",result);
		}
	}
}

#include<stdio.h>

int Arr[501][501],Tree[501][4*555];

void Build(int N,int n,int b,int e){
	
	if(b>e){
		
		return;
	}
	
	if(b==e){
		
		Tree[N][n]=Arr[N][b];
		
		return;
	}
	
	int m=(b+e)/2;
	
	int l=n*2;
	
	int r=n*2+1;
	
	Build(N,l,b,m);
	
	Build(N,r,m+1,e);
	
	if(Tree[N][l]>Tree[N][r]){
		
		Tree[N][n]=Tree[N][l];
	}
	
	else{
		
		Tree[N][n]=Tree[N][r];
	}
}

int Query(int N,int n,int b,int e,int i,int j){
	
	if(b>e || e<i || b>j){
		
		return -1;
	}
	
	if(b>=i && e<=j){
		
		return Tree[N][n];
	}
	
	int m=(b+e)/2;
	
	int l=n*2;
	
	int r=n*2+1;
	
	int q1=Query(N,l,b,m,i,j);
	
	int q2=Query(N,r,m+1,e,i,j);
	
	if(q1>q2){
		
		return q1;
	}
	
	else{
		
		return q2;
	}
}

int main(){
	
	int T;
	
	scanf("%d",&T);
	
	for(int t=0; t<T; t+=1){
		
		int N,Q;
		
		scanf("%d %d",&N,&Q);
		
		for(int i=1; i<=N; i+=1){
			
			for(int j=1; j<=N; j+=1){
				
				scanf("%d",&Arr[i][j]);
			}
			
			Build(i,1,1,N);
		}
		
		printf("Case %d:\n",t+1);
		
		while(Q--){
			
			int I,J,S;
			
			scanf("%d %d %d",&I,&J,&S);
			
			S-=1;
			
			int Max=-1;
			
			for(int i=I; i<=I+S; i+=1){
				
				int q=Query(i,1,1,N,J,J+S);
				
				if(q>Max){
					
					Max=q;
				}
			}
			
			printf("%d\n",Max);
		}
	}
}

#include<bits/stdc++.h>

using namespace std;

int X[4]={1,-1,0,0};

int Y[4]={0,0,1,-1};

int main(){
	
	int T;
	
	cin>>T;
	
	for(int t=0; t<T; t+=1){
		
		int x,y;
		
		cin>>y>>x;
		
		string s[x];
		
		queue <int> qx,qy;
		
		for(int i=0; i<x; i+=1){
			
			cin>>s[i];
			
			for(int j=0; j<y; j+=1){
				
				if(s[i][j]=='@'){
					
					qx.push(i);
					
					qy.push(j);
				}
			}
		}
		
		int visit[x][y];
		
		for(int i=0; i<x; i+=1){
			
			for(int j=0; j<y; j+=1){
				
				visit[i][j]=0;
			}
		}
		
		int count=0;
		
		while(!qx.empty()){
			
			int u=qx.front();
			
			int v=qy.front();
			
			qx.pop();
			
			qy.pop();
			
			count+=1;
			
			visit[u][v]=1;
			
			for(int i=0; i<4; i+=1){
				
				int U=u+X[i];
				
				int V=v+Y[i];
				
				if(U>=0 && U<x && V>=0 && V<y && visit[U][V]==0 && s[U][V]=='.'){
					
					qx.push(U);
					
					qy.push(V);
					
					visit[U][V]=1;
				}
			}
		}
		
		printf("Case %d: %d\n",t+1,count);
	}
}

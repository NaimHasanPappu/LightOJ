#include<bits/stdc++.h>

using namespace std;

int fx[4]={1,-1,0,0};

int fy[4]={0,0,1,-1};

vector <string> arr;

map < int , map < int , int > > level,visit;

int bfs(int i,int j,int n,int m){
	
	visit.clear();
	
	level.clear();
	
	queue <int> qx,qy;
	
	qx.push(i);
	
	qy.push(j);
	
	while(!qx.empty()){
		
		int ux=qx.front();
		
		int uy=qy.front();
		
		qx.pop();
		
		qy.pop();
		
		for(int k=0; k<4; k+=1){
			
			int vx=ux+fx[k];
			
			int vy=uy+fy[k];
			
			if(vx>=0 && vx<n && vy>=0 && vy<m && visit[vx][vy]==0){
				
				visit[vx][vy]=1;
				
				if(arr[vx][vy]=='m' || arr[vx][vy]=='#'){
					
					continue;
				}
				
				level[vx][vy]=level[ux][uy]+1;
				
				if(arr[vx][vy]=='h'){
					
					return level[vx][vy];
				}
				
				qx.push(vx);
				
				qy.push(vy);
			}
		}
	}
}

int main(){
	
	int T;
	
	cin>>T;
	
	for(int t=0; t<T; t+=1){
		
		arr.clear();
		
		int n,m;
		
		cin>>n>>m;
		
		int ax,ay,bx,by,cx,cy,hx,hy;
		
		for(int i=0; i<n; i+=1){
			
			string s;
			
			cin>>s;
			
			arr.push_back(s);
			
			for(int j=0; j<m; j+=1){
				
				if(s[j]=='a'){
					
					ax=i;
					
					ay=j;
				}
				
				else if(s[j]=='b'){
					
					bx=i;
					
					by=j;
				}
				
				else if(s[j]=='c'){
					
					cx=i;
					
					cy=j;
				}
			}
		}
		
		int Max=0;
		
		Max=max(Max,bfs(ax,ay,n,m));
		
		Max=max(Max,bfs(bx,by,n,m));
		
		Max=max(Max,bfs(cx,cy,n,m));
		
		printf("Case %d: %d\n",t+1,Max);
	}
}

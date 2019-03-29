#include<bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	//ofstream f;
	
	//f.open("Output.txt");
	
	int T;
	
	cin>>T;
	
	for(int t=0; t<T; t+=1){
		
		int n,m;
		
		cin>>n>>m;
		
		vector < vector <int> > adj(n+1);
		
		vector <int> money(n+1),visit(n+1,0);
		
		int Total_Money = 0;
		
		for(int i=1; i<=n; i+=1){
			
			cin>>money[i];
			
			Total_Money += money[i];
		}
		
		int u,v;
		
		set <int> node;
		
		for(int i=0; i<m; i+=1){
			
			cin>>u>>v;
			
			node.insert(u);
			
			node.insert(v);
			
			adj[u].push_back(v);
			
			adj[v].push_back(u);
		}
		
		cout<<"Case "<<t+1<<": ";
		
		//f<<"Case "<<t+1<<": ";
		
		if(Total_Money%n != 0){
			
			cout<<"No"<<endl;
			
			//f<<"No"<<endl;
			
			continue;
		}
		
		int Avrg = Total_Money/n;
		
		bool k = 1;
		
		for(auto i=node.begin(); i!=node.end(); i++){
			
			int total = 0;
			
			int total_money = 0;
			
			u = (*i);
			
			if(visit[u]){
				
				continue;
			}
			
			queue <int> q;
			
			q.push(u);
			
			visit[u] = 1;
			
			while(!q.empty()){
				
				u = q.front();
				
				q.pop();
				
				total += 1;
				
				total_money += money[u];
				
				int l = adj[u].size();
				
				for(int i=0; i<l; i+=1){
					
					v = adj[u][i];
					
					if(visit[v] == 0){
						
						visit[v] = 1;
						
						q.push(v);
					}
				}
			}
			
			if(total_money%total == 0){
				
				total_money /= total;
				
				if(total_money == Avrg){
					
					k = 1;
				}
				
				else{
					
					k = 0;
					
					break;
				}
			}
			
			else{
				
				k = 0;
				
				break;
			}
		}
		
		if(k){
			
			cout<<"Yes";
			
			//f<<"Yes";
		}
		
		else{
			
			cout<<"No";
			
			//f<<"No";
		}
		
		cout<<endl;
		
		//f<<endl;
	}
	
	//f.close();
}

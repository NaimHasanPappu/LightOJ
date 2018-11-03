#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int T;
	
	scanf("%d",&T);
	
	for(int t=0; t<T; t+=1){
		
		deque <int> q;
		
		int n,m;
		
		cin>>n>>m;
		
		printf("Case %d:\n",t+1);
		
		for(int i=0; i<m; i+=1){
			
			string s;
			
			cin>>s;
			
			int y;
			
			int x=q.size();
			
			if(s=="pushLeft"){
				
				cin>>y;
				
				if(x<n){
					
					q.push_front(y);
					
					cout<<"Pushed in left: "<<y;
				}
				
				else{
					
					cout<<"The queue is full";
				}
			}
			
			else if(s=="pushRight"){
				
				cin>>y;
				
				if(x<n){
					
					q.push_back(y);
					
					cout<<"Pushed in right: "<<y;
				}
				
				else{
					
					cout<<"The queue is full";
				}
			}
			
			else if(s=="popLeft"){
				
				if(x>0){
					
					cout<<"Popped from left: "<<q.front();
					
					q.pop_front();
				}
				
				else{
					
					cout<<"The queue is empty";
				}
			}
			
			else if(s=="popRight"){
				
				if(x>0){
					
					cout<<"Popped from right: "<<q.back();
					
					q.pop_back();
				}
				
				else{
					
					cout<<"The queue is empty";
				}
			}
			
			cout<<endl;
		}
	}
}

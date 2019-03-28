#include<bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int T;
	
	cin>>T;
	
	for(int t=0; t<T; t+=1){
		
		long long int n;
		
		string s;
		
		cin>>n>>s;
		
		cout<<"Case "<<t+1<<": ";
		
		if(s == "Bob"){
			
			if(n%3 == 0){
				
				cout<<"Alice";
			}
			
			else{
				
				cout<<"Bob";
			}
		}
		
		else{
			
			if(n%3 == 1){
				
				cout<<"Bob";
			}
			
			else{
				
				cout<<"Alice";
			}
		}
		
		cout<<endl;
	}
}

#include<bits/stdc++.h>

using namespace std;

#define lli long long int
 
#define ulli unsigned long long int
 
#define Pi 3.14159265358979323846264338327950288419716939937510

int main(){
	
    ios_base::sync_with_stdio(false); //cin.tie(nullptr); cout.tie(nullptr);
    
    //ifstream cin; ofstream cout; cin.open("input.txt"); cout.open("output.txt");
    
    int T;
    
    cin>>T;
    
    for(int t=0; t<T; t++){
    	
    	cout<<"Case "<<t+1<<":"<<endl;
    	
    	int c = 1;
    	
    	stack <string> x,z,a;
    	
    	string y;
    	
    	y = "http://www.lightoj.com/";
    	
    	while(true){
    		
    		string s;
    		
    		cin>>s;
    		
    		if(s == "QUIT"){
    			
    			break;
			}
			
			if(s == "VISIT"){
				
				string url;
				
				cin>>url;
				
				x.push(y);
				
				y = url;
				
				cout<<y;
				
				z = a;
			}
			
			else if(s == "FORWARD"){
				
				if(z.empty()){
					
					cout<<"Ignored";
				}
				
				else{
					
					x.push(y);
					
					y = z.top();
					
					z.pop();
					
					cout<<y;
				}
			}
			
			else{
				
				if(x.empty()){
					
					cout<<"Ignored";
				}
				
				else{
					
					z.push(y);
					
					y = x.top();
					
					x.pop();
					
					cout<<y;
				}
			}
			
			cout<<endl;
		}
	}
}

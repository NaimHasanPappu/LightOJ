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
    	
    	lli N,C;
    	
    	cin>>N>>C;
    	
    	cout<<"Case "<<t+1<<": ";
    	
    	if(N == 0){
    		
    		cout<<"0";
		}
		
		else{
			
			lli x = C/(2*N);
			
			lli y = x+1;
			
			if(x*(C-x*N) >= y*(C-y*N)){
				
				cout<<x;
			}
			
			else{
				
				cout<<y;
			}
		}
    	
    	cout<<endl;
	}
}

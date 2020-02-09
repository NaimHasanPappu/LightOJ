#include<bits/stdc++.h>
 
using namespace std;
 
#define lli long long int
 
#define ulli unsigned long long int
 
#define Pi 3.14159265358979323846264338327950288419716939937510
 
int main(){
   
    //ios_base::sync_with_stdio(false); //cin.tie(nullptr); cout.tie(nullptr);
   
    //ifstream cin; ofstream cout; cin.open("input.txt"); cout.open("output.txt");
   
    int T;
    
    cin>>T;
    
    for(int t=0; t<T; t++){
    	
    	int n;
    	
    	cin>>n;
    	
    	vector <lli> a(n);
    	
    	for(auto &i : a){
    		
    		cin>>i;
		}
		
		sort(a.begin(),a.end());
		
		reverse(a.begin(),a.end());
		
		lli result = 0;
		
		while(!a.empty()){
			
			lli x = a.back();
			
			result += x+1;
			
			lli y = x+1;
			
			while(a.back() == x and y>0){
				
				a.pop_back();
				
				y--;
			}
		}
		
		cout<<"Case "<<t+1<<": "<<result<<endl;
	}
}

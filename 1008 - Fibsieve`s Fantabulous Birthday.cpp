#include<bits/stdc++.h>

using namespace std;

#define lli long long int

void Solve(int t){
	
	lli n;
	
	cin>>n;
	
	cout<<"Case "<<t+1<<": ";
	
	lli x=(floor)(sqrt(n));
	
	lli y=x+1;
	
	lli X=x*x;
	
	lli Y=y*y;
	
	if(X==n){
		
		if(n&1){
			
			cout<<"1 "<<x;
		}
		
		else{
			
			cout<<x<<" 1";
		}
	}
	
	else{
		
		lli Z=(X+1+Y)/2;
		
		if(Z==n){
			
			if(Y>X){
				
				cout<<y<<" "<<y;
			}
			
			else{
				
				cout<<x<<" "<<x;
			}
		}
		
		else{
			
			if(Y&1){
				
				if(n>Z && n<Y){
					
					cout<<Y+1-n<<" "<<y;
				}
				
				else{
					
					cout<<y<<" "<<y-(Z-n);
				}
			}
			
			else{
				
				if(n>Z && n<Y){
					
					cout<<y<<" "<<y-(n-Z);
				}
				
				else{
					
					cout<<y-(Z-n)<<" "<<y;
				}
			}
		}
	}
}

int main(){
	
	int t;
	
	cin>>t;
	
	for(int i=0; i<t; i+=1){
		
		Solve(i);
		
		cout<<endl;
	}
}

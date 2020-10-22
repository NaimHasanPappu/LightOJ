#include<bits/stdc++.h>

using namespace std;

#define lli long long int

#define ulli unsigned long long int

#define Pi 3.14159265358979323846264338327950288419716939937510

int main(){
	
	ios :: sync_with_stdio(false); cin.tie(nullptr);
	
	//ifstream cin; cin.open("input.txt");
	
	//ofstream cout; cout.open("output.txt");
	
	int T;
	
	cin>>T;
	
	for(int t=0; t<T; t++){
		
		int n;
		
		cin>>n;
		
		vector <int> a(n+1);
		
		a[0] = 2;
		
		for(int i=1; i<=n; i++){
			
			cin>>a[i];
		}
		
		int c = 0;
		
		for(int i=1; i<=n; i++){
			
			int k = a[i]-a[i-1];
			
			while(k){
				
				for(int j=5; j>0; j--){
					
					int p = k/j;
					
					c += p;
					
					k -= (p*j);
				}
			}
		}
		
		cout<<"Case "<<t+1<<": "<<c<<endl;
	}
}

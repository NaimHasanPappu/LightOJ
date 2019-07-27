#include<bits/stdc++.h>

using namespace std;

int main(){
	
	ios :: sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	
	int T;
	
	cin>>T;
	
	for(int t=0; t<T; t++){
		
		string a,b;
		
		cin>>a>>b;
		
		int l = b.length();
		
		b += '+'+a;
		
		int n = b.length();
		
		vector <int> z(n,0);
		
		for(int i=1,l=0,r=0; i<n; i++){
			
			if(i>r){
				
				l = r = i;
				
				while(r<n && b[r-l] == b[r]){
					
					r++;
				}
				
				z[i] = r-l;
				
				r--;
			}
			
			else{
				
				int j = i-l;
				
				if(z[j]+i <= r){
					
					z[i] = z[j];
				}
				
				else{
					
					l = i;
					
					while(r<n && b[r-l] == b[r]){
					
						r++;
					}
				
					z[i] = r-l;
				
					r--;
				}
			}
		}
		
		int c = 0;
	
		for(int i : z){
		
			if(i == l){
			
				c++;
			}
		}
	
		cout<<"Case "<<t+1<<": "<<c<<endl;
	}
}

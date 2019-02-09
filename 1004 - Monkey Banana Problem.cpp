#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios::sync_with_stdio(0);
	
	int T;
	
	cin>>T;
	
	for(int t=0; t<T; t+=1){
		
		int n;
		
		cin>>n;
		
		int arr[2*n][n+1],dp[2*n][n+1];
		
		for(int i=0; i<2*n; i+=1){
			
			for(int j=0; j<=n; j+=1){
				
				dp[i][j] = 0;
			}
		}
		
		for(int i=1; i<=n; i+=1){
			
			for(int j=1; j<=i; j+=1){
				
				cin>>arr[i][j];
			}
		}
		
		for(int i=n+1; i<2*n; i+=1){
			
			for(int j=1; j<=2*n-i; j+=1){
				
				cin>>arr[i][j];
			}
		}
		
		dp[1][1] = arr[1][1];
		
		for(int i=1; i<n; i+=1){
			
			for(int j=1; j<=i; j+=1){
				
				dp[i+1][j] = max(dp[i+1][j] , dp[i][j]+arr[i+1][j]);
				
				dp[i+1][j+1] = max(dp[i+1][j+1] , dp[i][j]+arr[i+1][j+1]);
			}
		}
		
		for(int i=n+1; i<2*n; i+=1){
			
			for(int j=1; j<=2*n-i; j+=1){
				
				dp[i][j] = max(dp[i][j] , max(arr[i][j]+dp[i-1][j],arr[i][j]+dp[i-1][j+1]));
			}
		}
		
		cout<<"Case "<<t+1<<": "<<dp[2*n-1][1]<<endl;
	}
}

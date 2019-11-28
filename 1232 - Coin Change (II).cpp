#include<bits/stdc++.h>
 
using namespace std;
 
#define lli long long int
 
#define ulli unsigned long long int
 
#define Pi 3.14159265358979323846264338327950288419716939937510
 
int main(){
 
	ios :: sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	
	int T;
	
	cin>>T;
	
	for(int t=0; t<T; t++){
	
		int n,K;
		
		cin>>n>>K;
		
		vector <int> coins(n);
		
		for(auto &i : coins){
			
			cin>>i;
		}
		
		sort(coins.begin(),coins.end());
		
		vector <int> dp(K+1,0);
		
		dp[0] = 1;
		
		for(auto &i : coins){
			
			for(int j=i; j<=K; j++){
				
				dp[j] += dp[j-i];
				
				if(dp[j] >= 100000007){
					
					dp[j] %= 100000007;
				}
			}
		}
		
		cout<<"Case "<<t+1<<": "<<dp[K]<<endl;
	}
}

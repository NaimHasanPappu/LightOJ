#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int T;
	
	scanf("%d",&T);
	
	for(int t=0; t<T; t+=1){
		
		int N,K;
		
		scanf("%d %d",&N,&K);
		
		string s;
		
		for(int i=0; i<N; i+=1){
			
			s+=(char)('A'+i);
		}
		
		printf("Case %d:\n",t+1);
		
		cout<<s<<endl;
		
		for(int i=1; i<K; i+=1){
			
			if(next_permutation(s.begin(),s.end())){
				
				cout<<s<<endl;
			}
			
			else{
				
				break;
			}
		}
	}
}

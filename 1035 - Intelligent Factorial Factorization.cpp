#include<bits/stdc++.h>
#include<chrono>

using namespace std;
using namespace std :: chrono;

int main(){
	
	ios :: sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	
	//auto start = high_resolution_clock::now();
	
	//auto end = high_resolution_clock::now();
	
	//auto time = duration_cast <microseconds> (end - start);
	
	//cout<<endl<<time.count()<<endl;
	
	vector <int> Arr(111,1),Primes;
	
	Primes.push_back(2);
	
	for(int i=3; i<=100; i+=2){
		
		if(Arr[i]){
			
			Primes.push_back(i);
			
			for(int j=i*i; j<=100; j+=2*i){
				
				Arr[j] = 0;
			}
		}
	}
	
	int T;
	
	cin>>T;
	
	for(int t=0; t<T; t++){
		
		int N;
		
		cin>>N;
		
		map <int,int> factors;
		
		for(int i : Primes){
			
			if(i <= N){
				
				int n = N;
				
				while(n){
					
					factors[i] += n/i;
					
					n /= i;
				}
			}
			
			else{
				
				break;
			}
		}
		
		cout<<"Case "<<t+1<<": "<<N<<" = ";
		
		bool j = 0;
		
		for(auto i = factors.begin(); i != factors.end(); i++){
			
			if(j){
				
				cout<<" * ";
			}
			
			j = 1;
			
			cout<<i->first<<" ("<<i->second<<")";
		}
		
		cout<<endl;
	}
}

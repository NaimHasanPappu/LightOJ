#include<bits/stdc++.h>

using namespace std;

#define lli long long int

#define ulli unsigned long long int

#define Pi 3.14159265358979323846264338327950288419716939937510

lli bin_expo(int a, int b){
	
	lli result = 1;
	
	while(b){
		
		if(b&1){
			
			result *= a;
		}
		
		a *= a;
		
		b /= 2;
	}
	
	return result;
}

int main(){
	
	ios :: sync_with_stdio(false); cin.tie(nullptr);
	
	//ifstream cin; cin.open("input.txt"); ofstream cout; cout.open("output.txt");
	
	int T;
	
	cin>>T;
	
	for(int t=0; t<T; t++){
		
		int n;
		
		cin>>n;
		
		map <int,int> factors;
		
		for(int j=0; j<n; j++){
			
			int p;
			
			cin>>p;
			
			for(int i=2; i*i<=p; i++){
				
				int q = 0;
				
				while(p%i == 0){
					
					q++;
					
					p /= i;
				}
				
				factors[i] = max(factors[i], q);
			}
			
			if(p>1){
				
				factors[p] = max(factors[p], 1);
			}
		}
		
		vector <lli> numbers;
		
		for(auto &i : factors){
			
			numbers.push_back(bin_expo(i.first, i.second));
		}
		
		vector <int> result;
		
		result.push_back(1);
		
		lli carry = 0;
		
		for(auto &i : numbers){
			
			for(auto &j : result){
				
				lli k = i*j+carry;
				
				j = k%10;
				
				carry = k/10;
			}
			
			while(carry){
				
				result.push_back(carry%10);
				
				carry /= 10;
			}
		}
		
		reverse(result.begin(),result.end());
		
		cout<<"Case "<<t+1<<": ";
		
		for(auto &i : result){
			
			cout<<i;
		}
		
		cout<<endl;
	}
}

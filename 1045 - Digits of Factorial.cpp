#include<bits/stdc++.h>

using namespace std;

double arr[1111111];

int main(){
	
	arr[1]=(log10(1));
	
	for(int i=2; i<=1000000; i+=1){
		
		arr[i]=arr[i-1]+(log10(i));
	}
	
	int T;
	
	cin>>T;
	
	for(int t=0; t<T; t+=1){
		
		int n,b;
		
		cin>>n>>b;
		
		cout<<"Case "<<t+1<<": "<<1+(long long int)((floor)(arr[n]/(log10(b))))<<endl;
	}
}

#include<bits/stdc++.h>
 
using namespace std;
 
#define lli long long int
 
#define ulli unsigned long long int
 
#define Pi 3.14159265358979323846264338327950288419716939937510
 
int main(){
   
    int T;
    
    cin>>T;
    
    for(int t=0; t<T; t++){
    	
    	int n,d;
    	
    	cin>>n>>d;
    	
    	deque <int> a;
    	
    	multiset <int> b;
    	
    	int result = -1;
    	
    	for(int i=1; i<=n; i++){
    		
    		int j;
    		
    		cin>>j;
    		
    		a.push_back(j);
    		
    		b.insert(j);
    		
    		if(i>d){
    			
    			j = a[0];
    			
    			a.pop_front();
    			
    			auto k = b.find(j);
    			
    			b.erase(k);
			}
			
			int x = (*(--b.end()))-(*b.begin());
			
			result = max(result,x);
		}
		
		cout<<"Case "<<t+1<<": "<<result<<endl;
	}
}

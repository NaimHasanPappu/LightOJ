#include <bits/stdc++.h>

using namespace std;
 
int main(){
   
    int n;
   
    scanf("%d",&n);
   
    for(int i=0; i<n; i+=1){
    	
    	string s,t;
    	
    	cin>>s;
       
        t=s;
        
        reverse(t.begin(),t.end());
       
        if(s==t){
        	
        	printf("Case %d: Yes\n",i+1);
		}
		
        else{
        	
        	printf("Case %d: No\n",i+1);
		}
    }
 
}

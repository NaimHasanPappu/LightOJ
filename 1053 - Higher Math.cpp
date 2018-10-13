#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
   
    int t;
   
    cin>>t;
   
    for(int i=0; i<t; i++){
       
        int a,b,c;
       
        cin>>a>>b>>c;
       
        if ((a*a==b*b+c*c) || (b*b==c*c+a*a) || (c*c==a*a+b*b))
       
        printf("Case %d: yes\n",i+1);
       
        else
       
        printf("Case %d: no\n",i+1);
    }
}

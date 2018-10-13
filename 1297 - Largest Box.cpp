#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
   
    int t;
   
    cin>>t;
   
    for(int i=0; i<t; i+=1){
       
        double l,w;
       
        cin>>l>>w;
       
        double x=(l+w) - sqrt(l*l + w*w - l*w);
       
        x=x/6.0;
       
        x=x*(l-2*x)*(w-2*x);
       
        cout<<"Case "<<i+1<<": ";
       
        printf("%lf\n",x);
    }
}

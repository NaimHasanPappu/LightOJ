#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
   
    double pi=2*acos(0);
   
    int t;
   
    cin>>t;
   
    for(int i=0; i<t; i+=1){
       
        int R,r,h,p;
       
        cin>>R>>r>>h>>p;
       
        double l=(h*r*1.0)/(R-r);
       
        double mr=(r*(p+l+0.0))/l;
       
        double wv=((mr*mr*(p+l))-(r*r*l))*(1/3.0)*pi;
       
        cout<<"Case "<<i+1<<": ";
       
        printf("%.10lf\n",wv);
    }
}

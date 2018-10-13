#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
   
    int t;
   
    cin>>t;
   
    for(int i=1; i<=t; i+=1){
       
        int ox,oy,ax,ay,bx,by;
       
        cin>>ox>>oy>>ax>>ay>>bx>>by;
       
        double ab = sqrt((pow((ax-bx),2)) + (pow((ay-by),2)));
       
        ab/=2.0;
       
        double r = sqrt((pow((ox-bx),2)) + (pow((oy-by),2)));
       
        double theta = asin(ab/r);
       
        theta*=2;
       
        long double arc = r*theta;
       
        cout<<"Case "<<i<<": ";
       
        printf("%llf\n",arc);
    }
}

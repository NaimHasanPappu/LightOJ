#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int c;
   
    cin>>c;
   
    for(int i=0; i<c; i++){
       
        double f,e;
       
        cin>>f;
       
        e=(f*f)*(4-2*acos(0.0));
       
        cout<<"Case "<<i+1<<": "<<fixed<<setprecision(2)<<e<<endl;
    }
}

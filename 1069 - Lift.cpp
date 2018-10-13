#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
   
    int t;
   
    cin>>t;
   
    for( int i = 0; i < t; i++ ){
       
        int x, y, z;
       
        cin>>x>>y;
       
        if( x == y )
       
        z = 16+x*4;
       
        else if( y>x )
       
        z = 16+y*4;
       
        else
       
        z = 16+x*4+(x-y)*4;
       
        cout<<"Case "<<i+1<<": "<<z+3<<endl;
    }
}

#include<bits/stdc++.h>
 
using namespace std;
 
double pi=2*acos(0.0);
 
int main(){
   
    int t;
   
    cin>>t;
   
    for(int i=1; i<=t; i+=1){
       
        int ax,ay,bx,by,cx,cy,dx,dy;
       
        cin>>ax>>ay>>bx>>by>>cx>>cy;
       
        dx=cx+ax-bx;
       
        dy=cy+ay-by;
       
        int area=.5*(abs(((bx*ay+cx*by+dx*cy+ax*dy)-(ax*by+bx*cy+cx*dy+dx*ay))));
       
        cout<<"Case "<<i<<": "<<dx<<" "<<dy<<" "<<area<<endl;
    }
}

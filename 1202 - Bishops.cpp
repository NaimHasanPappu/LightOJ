#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
   
    int t;
   
    cin>>t;
   
    for(int i=0; i<t; i+=1){
       
        int x1,y1,x2,y2;
       
        cin>>x1>>y1>>x2>>y2;
       
       
        int x=abs(x1-x2);
       
        int y=abs(y1-y2);
       
       
        if(x==y){
           
            printf("Case %d: 1\n",i+1);
        }
       
        else if((x+y)&1){
           
            printf("Case %d: impossible\n",i+1);
        }
       
        else{
           
            printf("Case %d: 2\n",i+1);
        }
    }
}

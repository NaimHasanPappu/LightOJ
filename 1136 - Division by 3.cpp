#include<iostream>
 
#include<stdio.h>
 
using namespace std;
 
int main(){
   
    int t;
   
    cin>>t;
   
    for(int i=0; i<t; i++){
       
        int x,y,c1,c2,a,b;
       
        cin>>x>>y;
       
        if(x>y)
       
        swap(x,y);
       
        if(x%3==1)
       
        a=x+2;
       
        else if(x%3==2)
       
        a=x+1;
       
        else
       
        a=x;
       
        if(y%3==1)
       
        b=y-1;
       
        else if(y%3==2)
       
        b=y-2;
       
        else
       
        b=y;
       
        c1=1+(b-a)/3;
       
        if(x%3==1)
       
        a=x+1;
       
        else if(x%3==0)
       
        a=x+2;
       
        else
       
        a=x;
       
        if(y%3==1)
       
        b=y-2;
       
        else if(y%3==2)
       
        b=y;
       
        else
       
        b=y-1;
       
        c2=1+(b-a)/3;
       
        printf("Case %d: %d\n",i+1,c1+c2);
    }
}

#include<bits/stdc++.h>
 
using namespace std;
 
int bin(int n){
   
    int s=0;
   
    for(int i=0; i<8; i+=1){
       
        int x=n%10;
       
        s=s+x*pow(2,i);
       
        n/=10;
    }
   
    return s;
}
 
int main(){
   
    int t;
   
    cin>>t;
   
    for(int i=0; i<t; i+=1){
       
        int a,b,c,d;
       
        char ch;
       
        cin>>a;
       
        ch=getchar();
       
        cin>>b;
       
        ch=getchar();
       
        cin>>c;
       
        ch=getchar();
       
        cin>>d;
       
       
       
        int e,f,g,h;
       
        cin>>e;
       
        e=bin(e);
       
        ch=getchar();
       
        cin>>f;
       
        f=bin(f);
       
        ch=getchar();
       
        cin>>g;
       
        g=bin(g);
       
        ch=getchar();
       
        cin>>h;
       
        h=bin(h);
       
        if(a==e && b==f && c==g && d==h){
           
            printf("Case %d: Yes\n",i+1);
        }
       
        else{
           
            printf("Case %d: No\n",i+1);
        }
    }
}

#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
   
    int t;
   
    cin>>t;
   
    getchar();
   
    for(int a=0; a<t; a+=1){
       
       
        string s[3];
       
       
        getline(cin,s[1]);
       
        getline(cin,s[2]);
       
       
        int l[3];
       
       
        l[1]=s[1].length();
       
        l[2]=s[2].length();
       
       
        for(int i=0; i<l[1]; i+=1){
           
            if( s[1][i]>='a' && s[1][i]<='z' ){
               
                s[1][i]-=32;
            }
        }
       
        for(int i=0; i<l[2]; i+=1){
           
            if( s[2][i]>='a' && s[2][i]<='z' ){
               
                s[2][i]-=32;
            }
        }
       
       
        int c=0,ln=0;
       
        for(int i=0; i<l[1]; i+=1){
           
            if(s[1][i]==' '){
               
                continue;
            }
           
            for(int j=0; j<l[2]; j+=1){
           
                if(s[1][i]==s[2][j]){
                   
                    c+=1;
                   
                    s[2][j]=';';
                   
                    break;
                }
            }
        }
       
        for(int i=0; i<l[1]; i+=1){
           
            if(s[1][i] != ' '){
               
                ln+=1;
            }
        }
       
        if(ln==c){
           
            printf("Case %d: Yes\n",a+1);
        }
       
        else{
           
            printf("Case %d: No\n",a+1);
        }
    }
}

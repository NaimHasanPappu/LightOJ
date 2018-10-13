#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
   
    int t;
   
    cin>>t;
   
    for(int a=1; a<=t; a+=1){
       
        string s;
   
        long long int n,d=0;
   
        cin>>s>>n;
   
        int l=s.length();
       
        int i=0;
       
        if(s[0]=='-'){
           
            i=1;
        }
   
        for(; i<l; i+=1){
       
            d=d*10+s[i]-'0';
       
            d=d%n;
        }
       
        cout<<"Case "<<a<<": ";
   
        if(d==0){
       
            cout<<"divisible";
        }
   
        else{
       
            cout<<"not divisible";
        }
       
        cout<<endl;
    }
}

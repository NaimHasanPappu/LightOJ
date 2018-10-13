#include<iostream>
 
using namespace std;
 
int main(){
   
    long long int n[10003], x;
   
    int t;
   
    cin>>t;
   
    for(int i=0; i<t; i++){
       
        cin>>n[0]>>n[1]>>n[2]>>n[3]>>n[4]>>n[5]>>x;
       
        for(long long int j=6; j<=x; j++){
           
            n[j]=(n[j-1]+n[j-2]+n[j-3]+n[j-4]+n[j-5]+n[j-6])%10000007;
        }
       
        cout<<"Case "<<i+1<<": "<<n[x]%10000007<<endl;
    }
}

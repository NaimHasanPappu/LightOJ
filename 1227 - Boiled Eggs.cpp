#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
   
    int t;
   
    cin>>t;
   
    for(int i=1; i<=t; i+=1){
       
        int n,P,Q;
       
        cin>>n>>P>>Q;
       
        int arr[n];
       
        for(int j=0; j<n; j+=1){
           
            cin>>arr[j];
        }
       
        sort(arr,arr+n);
       
        int p=0,q=0;
       
        for(p=0; p<n; p+=1){
           
            q+=arr[p];
           
            if(q>Q){
               
                break;
            }
           
            if(p+1>P){
               
                break;
            }
        }
       
        cout<<"Case "<<i<<": "<<p<<endl;
    }
}

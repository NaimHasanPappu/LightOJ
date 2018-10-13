#include<iostream>
 
using namespace std;
 
int main(){
   
    int t;
   
    cin>>t;
   
    for(int i=0; i<t; i++){
       
        long long int x,y;
       
        cin>>x>>y;
           
        long long int p=y*(x/2);
       
        cout<<"Case "<<i+1<<": "<<p<<endl;
    }
}

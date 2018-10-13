#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
   
    int t;
   
    cin>>t;
   
    for(int i=1; i<=t; i+=1){
       
        int n,tk=0;
       
        cin>>n;
       
        cout<<"Case "<<i<<":"<<endl;
       
        for(int j=0; j<n; j+=1){
           
            string s;
           
            cin>>s;
           
            if(s=="donate"){
               
                int y;
               
                cin>>y;
               
                tk+=y;
            }
           
            else if(s=="report"){
               
                cout<<tk<<endl;
            }
        }
    }
}

#include<bits/stdc++.h>
 
using namespace std;
 
#define lli long long int
 
#define ulli unsigned long long int
 
#define Pi 3.14159265358979323846264338327950288419716939937510
 
int main(){
   
    ios_base::sync_with_stdio(false); //cin.tie(nullptr); cout.tie(nullptr);
   
    //ifstream cin; ofstream cout; cin.open("input.txt"); cout.open("output.txt");
   
    int T;
   
    cin>>T;
   
    for(int t=0; t<T; t++){
       
        vector <lli> Array(10001,0);
       
        lli n;
       
        for(int i=0; i<6; i++){
           
            cin>>Array[i];
            
            Array[i] %= 10000007;
        }
       
        for(int i=6; i<=10000; i++){
           
            Array[i] = Array[i-1]+Array[i-2]+Array[i-3]+Array[i-4]+Array[i-5]+Array[i-6];
           
            Array[i] %= 10000007;
        }
        
        cin>>n;
       
        cout<<"Case "<<t+1<<": "<<Array[n]<<endl;
    }
}

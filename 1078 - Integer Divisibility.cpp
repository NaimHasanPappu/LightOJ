#include<bits/stdc++.h>
 
using namespace std;
 
#define lli long long int
 
#define ulli unsigned long long int
 
#define Pi 3.14159265358979323846264338327950288419716939937510
 
int main(){
   
    //ios_base::sync_with_stdio(false); //cin.tie(nullptr); cout.tie(nullptr);
   
    //ifstream cin; ofstream cout; cin.open("input.txt"); cout.open("output.txt");
   
    int T;
   
    cin>>T;
   
    for(int t=0; t<T; t++){
       
        int n,d;
       
        cin>>n>>d;
       
        string result;
       
        int rem = 0;
       
        while(1){
           
            rem *= 10;
           
            rem += d;
           
            rem %= n;
           
            result += (char)(d+'0');
           
            if(rem == 0){
               
                break;
            }
        }
       
        cout<<"Case "<<t+1<<": "<<result.length()<<endl;
    }
}

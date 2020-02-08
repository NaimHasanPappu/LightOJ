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
   
    for(int tt=0; tt<T; tt++){
       
        long double v1,v2,v3,a1,a2;
        
        cin>>v1>>v2>>v3>>a1>>a2;
        
        long double d1 = (v1*v1*1.0)/(2*a1)+(v2*v2*1.0)/(2*a2);
        
        long double d2 = v3*(max((v1*1.0)/a1,(v2*1.0)/a2));
				
		cout<<"Case "<<tt+1<<": "<<fixed<<setprecision(10)<<(d1*1.0)<<" "<<fixed<<setprecision(10)<<(d2*1.0)<<endl;
    }
}

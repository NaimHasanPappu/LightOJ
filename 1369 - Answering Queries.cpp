#include<bits/stdc++.h>
 
using namespace std;
 
#define lli long long int
 
#define ulli unsigned long long int
 
#define Pi 3.14159265358979323846264338327950288419716939937510
 
int main(){
   
    //ios_base::sync_with_stdio(false); //cin.tie(nullptr); cout.tie(nullptr);
   
    //ifstream cin; ofstream cout; cin.open("input.txt"); cout.open("output.txt");
   
    int T;
   
    scanf("%d",&T);
   
    for(int t=0; t<T; t++){
       
        int n,q;
       
        scanf("%d %d",&n,&q);
       
        lli result1 = 0;
       
        lli result2 = 0;
       
        vector <lli> a(n);
       
        for(int i=0; i<n; i++){
           
            scanf("%d",&a[i]);
           
            result1 += (n-i-1)*a[i];
           
            result2 += i*a[i];
        }
       
        printf("Case %d:\n",t+1);
       
        while(q--){
           
            int k;
           
            scanf("%d",&k);
           
            if(k == 0){
               
                int x;
               
                lli v;
               
                scanf("%d %lld",&x,&v);
               
                result1 -= (n-x-1)*a[x];
               
                result2 -= x*a[x];
               
                a[x] = v;
               
                result1 += (n-x-1)*a[x];
               
                result2 += x*a[x];
            }
           
            else{
               
                printf("%lld\n",result1-result2);
            }
        }
    }
}

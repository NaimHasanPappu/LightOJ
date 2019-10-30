#include<bits/stdc++.h>
 
using namespace std;
 
#define lli long long int
 
#define ulli unsigned long long int
 
int main(){
   
    //ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
   
    int T;
   
    scanf("%d",&T);
   
    for(int t=0; t<T; t++){
       
        int n,q;
       
        scanf("%d %d",&n,&q);
       
        map <int,int> segments;
       
        int l,r;
       
        for(int i=0; i<n; i++){
           
            scanf("%d %d",&l,&r);
           
            segments[l]++;
           
            segments[r+1]--;
        }
       
        for(auto i=segments.begin(); i != segments.end(); i++){
           
            auto j = i;
           
            j++;
           
            if(j != segments.end()){
               
                j->second += i->second;
            }
        }
       
        /*for(auto i : segments){
           
            cout<<setw(5)<<i.first;
        }
       
        cout<<endl;
       
        for(auto i : segments){
           
            cout<<setw(5)<<i.second;
        }
       
        cout<<endl;*/
       
        printf("Case %d:\n",t+1);
       
        while(q--){
           
            int p;
           
            scanf("%d",&p);
           
            auto x = segments.lower_bound(p);
           
            if(x != segments.end()){
               
                if(x->first > p){
                   
                    x--;
                }
               
                printf("%d",x->second);
            }
           
            else{
               
                printf("0");
            }
           
            printf("\n");
        }
    }
}

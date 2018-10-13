#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
   
    vector <long long int> fact;
   
    long long int sum=1;
   
    fact.push_back(1);
   
    fact.push_back(1);
   
    for(int i=2;;i+=1){
       
        fact.push_back(fact[i-1]*i);
       
        sum+=fact[i];
       
        if(sum>1000000000000000000){
           
            break;
        }
    }
   
   
    int t;
   
    scanf("%d",&t);
   
    for(int i=0; i<t; i+=1){
       
        long long int y;
       
        scanf("%lld",&y);
 
       
            int visit[22];
           
            int j;
           
            for(j=0; j<22; j+=1){
               
                visit[j]=0;
            }
           
            stack <int> stk;
           
            int k=0;
           
            while(1){
           
                for(j=0; ;j+=1){
                   
                    if(y==2){
                       
                        stk.push(1);
                       
                        stk.push(0);
                       
                        k=1;
                       
                        break;
                    }
               
                    else if(y !=2 && y==fact[j]){
                       
                        if(visit[j]==0){
                   
                            stk.push(j);
                   
                            visit[j]=1;
                   
                            k=1;
                   
                            break;
                        }
                       
                        else if(visit[j]==1){
                           
                            k=2;
                           
                            break;
                        }
                    }
                   
                   
                    else if(fact[j]>y){
                       
                        if(visit[j-1]==1){
                           
                            k=2;
                           
                            break;
                        }
                   
                        y=y-fact[j-1];
                       
                        stk.push(j-1);
                       
                        visit[j-1]=1;
                   
                        break;
                    }
                }
               
                if(k!=0){
                   
                    break;
                }
            }
           
            if(k==2){
               
                printf("Case %d: impossible\n",i+1);
            }
           
            else if(k==1){
               
                printf("Case %d: ",i+1);
               
                printf("%d!",stk.top());
               
                stk.pop();
               
                while(!stk.empty()){
                   
                    printf("+%d!",stk.top());
                   
                    stk.pop();
                }
               
                cout<<endl;
            }
    }
}

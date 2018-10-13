#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
   
   
    int t;
   
    cin>>t;
   
   
    for(int k=0; k<t; k+=1){
       
   
        int n,m;
           
        cin>>m>>n;
           
           
        string str[n+1];
       
           
        int visit[n+1][m+1];
           
           
        for(int i=1; i<=n; i+=1){
           
               
            cin>>str[i];
        }
       
       
        int a,b;
           
           
        for(int i=1; i<=n; i+=1){
           
               
            for(int j=1; j<=m; j+=1){
               
                   
                if(str[i][j-1]=='@'){
                   
                       
                    a=i;
                       
                    b=j;
                       
                    visit[a][b]=0;
                }
               
               
                else if(str[i][j-1]=='#'){
                   
                       
                    visit[i][j]=-1;
                }
               
               
                else if(str[i][j-1]=='.'){
                   
                       
                    visit[i][j]=1;
                }
            }
        }
           
           
        queue<int> qr,qc;
       
       
        qr.push(a);
       
        qc.push(b);
       
       
        int cnt=0;
       
           
        while(!qr.empty()){
           
           
            int x,y;
           
               
            x=qr.front();
               
            y=qc.front();
           
               
            qr.pop();
               
            qc.pop();
           
               
            cnt+=1;
           
               
            int p,q,r,s;
           
               
            p=x+1;
               
            q=x-1;
               
            r=y+1;
               
            s=y-1;
           
               
            if(p>=1 && p<=n){
               
               
                if(visit[p][y]==1){
                   
                       
                    qr.push(p);
                       
                    qc.push(y);
                       
                    visit[p][y]=0;
                }
            }
           
           
            if(q>=1 && q<=n){
               
               
                if(visit[q][y]==1){
                   
                       
                    qr.push(q);
                       
                    qc.push(y);
                       
                    visit[q][y]=0;
                }
            }
           
           
            if(r>=1 && r<=m){
               
               
                if(visit[x][r]==1){
                   
                       
                    qr.push(x);
                       
                    qc.push(r);
                       
                    visit[x][r]=0;
                }
            }
           
           
            if(s>=1 && s<=m){
               
               
                if(visit[x][s]==1){
                       
                    qr.push(x);
                       
                    qc.push(s);
                       
                    visit[x][s]=0;
                }
            }
        }
           
        printf("Case %d: %d\n",k+1,cnt);
    }
}

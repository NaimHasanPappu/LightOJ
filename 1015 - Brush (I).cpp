#include <stdio.h>
 
int main(){
   
    int t;
   
    scanf("%d",&t);
   
    for(int i=1; i<=t; i+=1){
       
        int n;
       
        scanf(" %d",&n);
       
        int y=0, x;
       
        for(int j=0; j<n; j+=1){
           
            scanf("%d",&x);
           
            if(x>0)
           
            y=y+x;
        }
       
        printf("Case %d: %d\n",i,y);
    }
}

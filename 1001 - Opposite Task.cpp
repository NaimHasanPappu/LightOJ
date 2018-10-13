#include <stdio.h>
 
int main(){
   
    int t;
   
    scanf("%d",&t);
   
    for(int i=1; i<=t; i+=1){
    	
    	int x;
    	
        scanf("%d",&x);
        
        if(x>10)
        
        	printf("%d %d\n",x-10,10);
        
        else
        
        	printf("%d %d\n",0,x);
    }
}

#include <stdio.h>
 
int main(){
	
    int t;
   
    scanf("%d",&t);
   
    for(int i=0; i<t; i++){
    	
        int x, y, z;
       
        scanf("%d %d", &x, &y);
       
        if (x==1||y==1)
       
        	z = x*y;
       
        else if (x==2 && y==2)
       
        	z = 4;
       
        else if (x==2 && y>2){
        	
            z = (y/4)*4;
           
            if(y%4==1)
           
            	z = z+2;
           
            else if(y%4==2 || y%4==3)
           
            	z = z+4;
        }
       
        else if (y==2 && x>2){
           
            z = (x/4)*4;
           
            if(x%4==1)
           
            	z = z+2;
           
            else if(x%4==2 || x%4==3)
           
            	z = z+4;
        }
       
        else if((x*y)%2==0)
       
        	z = (x*y)/2;
       
        else
       
        	z = 1 + (x*y)/2;
       
        printf("Case %d: %d\n",i+1,z);
    }
}

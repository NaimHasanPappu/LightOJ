#include<stdio.h>

#include<math.h>
 
int main(){
	
    int t,n,c=0;
    
    double R,a,k,r,pi;
    
    pi=acos(-1);
    
    scanf("%d",&t);
    
    while(t--){
    	
        scanf("%lf %d",&R,&n);
        
        a=pi/n;
        
        k=sin(a);
        
        r=(R*k)/(1+k);
        
        printf("Case %d: %.10lf\n",++c,r);
    }
    
    return 0;
}

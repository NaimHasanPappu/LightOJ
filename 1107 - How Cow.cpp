#include<stdio.h>

int main(){
	
    int a,i;
    
    double b,c;
        
    scanf("%d",&a);
        
    for( i = 1; i <= a; i++ ){
        	
        scanf("%lf",&b);
            
        c = (4 * b * b) - (3.14159265358979323846264338327950288 * b * b);
            
       	printf("Case %d: %.2lf\n",i,c);
    }
        
    return 0;
}

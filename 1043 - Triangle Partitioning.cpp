#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int T;
	
	scanf("%d",&T);
	
	for(int t=0; t<T; t+=1){
		
		double A,B,C,R;
		
		scanf("%lf %lf %lf %lf",&A,&B,&C,&R);
		
		printf("Case %d: ",t+1);
		
		printf("%.8lf\n",(sqrt(((R+0.0)/(R+1.0))))*A*1.0);
	}
}

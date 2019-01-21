#include<bits/stdc++.h>

using namespace std;

int leap_year(int year){
	
	if(year%400 == 0){
		
		return 1;
	}
	
	else if(year%100 == 0){
		
		return 0;
	}
	
	else if(year%4 == 0){
		
		return 1;
	}
	
	else{
		
		return 0;
	}
}

int main(){
	
	int T;
	
	cin>>T;
	
	for(int t=0; t<T; t+=1){
		
		string m1,m2;
		
		int d1,d2,y1,y2;
		
		cin>>m1>>d1;
		
		getchar();
		
		cin>>y1;
		
		cin>>m2>>d2;
		
		getchar();
		
		cin>>y2;
		
		int total = (y2/400-y2/100+y2/4) - ((y1-1)/400-(y1-1)/100+(y1-1)/4);
		
		if(leap_year(y1)){
			
			if(m1 != "January" && m1 != "February"){
				
				total -= 1;
			}
		}
		
		if(leap_year(y2)){
			
			if(m2 == "January"){
				
				total -= 1;
			}
			
			else if(m2 == "February"){
				
				if(d2<29){
					
					total -= 1;
				}
			}
		}
		
		printf("Case %d: %d\n",t+1,total);
	}
}

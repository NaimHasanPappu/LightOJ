#include<bits/stdc++.h>
 
using namespace std;
 
double pi=2*acos(0.0);
 
int main(){
   
    int t;
   
    cin>>t;
   
    for(int i=1; i<=t; i+=1){
       
        double r1,r2,r3;
       
        cin>>r1>>r2>>r3;
       
        double a=r2+r3;
       
        double b=r1+r3;
       
        double c=r2+r1;
       
        double A=acos(((b*b+c*c-a*a)/(2.0*b*c)));
       
        double B=acos(((-b*b+c*c+a*a)/(2.0*c*a)));
       
        double C=acos(((b*b-c*c+a*a)/(2.0*a*b)));
       
        double s=(a+b+c)/2.0;
       
        double abc=sqrt(s*(s-a)*(s-b)*(s-c));
       
        double R1=(.5*r1*r1*A);
       
        double R2=(.5*r2*r2*B);
       
        double R3=(.5*r3*r3*C);
       
        double area=abc-(R1+R2+R3);
       
        cout<<"Case "<<i<<": ";
       
        printf("%.10lf\n",area);
    }
}

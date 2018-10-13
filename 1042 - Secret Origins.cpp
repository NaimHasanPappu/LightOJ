#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
   
    int t;
   
    cin>>t;
   
    for(int l=0; l<t; l++){
       
        int n,m,j;
   
        cin>>n;
       
        m=n;
   
        int arr1[5000],arr2[5000];
   
        for(j=0;n>=1;){
       
            int x=n%2;
       
            arr1[j]=x;
       
            j++;
       
            n=n/2;
       
            if(x==1 && n%2==0){
           
                arr1[j]=0;
           
                arr2[j]=1;
           
                arr2[j-1]=0;
           
                for(int i=0,k=j-2; i<j-1; i++,k--){
               
                    arr2[i]=arr1[k];
                }
           
                break;
            }
        }
   
        int s1=0,s2=0;
   
        for(int i=0; i<=j; i++){
       
            if(arr1[i]==0)
       
            continue;
       
            s1=s1+pow(2,i);
        }
   
        for(int i=0; i<=j; i++){
       
            if(arr2[i]==0)
       
            continue;
       
            s2=s2+pow(2,i);
        }
   
        cout<<"Case "<<l+1<<": "<<m+abs(s1-s2)<<endl;
    }
   
    return 0;
}

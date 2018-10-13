#include<bits/stdc++.h>
 
using namespace std;
 
class stud{
   
    public:
       
        string name;
       
        int ch;
};
 
int main(){
   
    int t;
   
    cin>>t;
   
    for(int k=0; k<t; k+=1){
       
        int n;
       
        cin>>n;
       
        stud student[n];
       
        for(int j=0; j<n; j+=1){
           
            cin>>student[j].name;
           
            int x,y,z;
           
            cin>>x>>y>>z;
           
            student[j].ch=x*y*z;
        }
       
        for(int i=0; i<n-1; i+=1){
           
            for(int j=i+1; j<n; j+=1){
               
                if(student[i].ch>student[j].ch){
                   
                    swap(student[i],student[j]);
                }
            }
        }
       
        cout<<"Case "<<k+1<<": ";
       
        if(student[0].ch==student[n-1].ch){
           
            cout<<"no thief\n";
        }
       
        else{
           
            cout<<student[n-1].name<<" took chocolate from "<<student[0].name<<endl;
        }
    }
}

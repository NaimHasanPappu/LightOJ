#include<bits/stdc++.h>
 
using namespace std;
 
int inf = 100001;
 
int arr[100001],tree[300003];
 
int segment ( int n, int b, int e ){
   
    if ( b == e ){
       
        tree[n] = arr[b];
       
        return arr[b];
    }
   
    else{
       
        int left = n*2;
       
        int right = n*2 + 1;
       
        int middle = ( b + e ) / 2;
       
        int x = segment ( left, b, middle );
       
        int y = segment ( right, middle+1, e );
       
        tree[n]=min(x,y);
       
        return tree[n];
    }
}
 
int query ( int n, int b, int e, int i, int j ){
   
    if ( i>e || j<b ){
       
        return inf;
    }
   
    else if ( b>=i && e<=j ){
       
        return tree[n];
    }
   
    else{
       
        int left=n*2;
       
        int right=n*2+1;
       
        int middle=(b+e)/2;
       
        int x = query(left,b,middle,i,j);
       
        int y = query(right,middle+1,e,i,j);
       
        return min(x,y);
    }
}
 
int main(){
   
    int t;
   
    scanf("%d",&t);
   
    for(int a=0; a<t; a+=1){
       
        int n,q;
   
        scanf("%d %d",&n,&q);
       
        int l=3*n;
       
        for(int i=1; i<=n; i+=1){
           
            scanf("%d",&arr[i]);
        }
       
        int y=segment(1,1,n);
       
        printf("Case %d:\n",a+1);
       
        for(int k=0; k<q; k+=1){
           
            int i,j;
           
            scanf("%d %d",&i,&j);
           
            y=query(1,1,n,i,j);
           
            printf("%d\n",y);
        }
    }
}

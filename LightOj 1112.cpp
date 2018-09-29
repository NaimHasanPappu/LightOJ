#include<bits/stdc++.h>
 
using namespace std;
 
#define mx 100005
 
int arr[mx] , tree[mx*3];
 
void segment ( int n , int b , int e ){
 
    if ( b == e ){
 
        tree[n] = arr[b];
 
        return;
    }
 
 
    int left = n * 2;
 
    int right = n * 2 + 1;
 
    int middle = ( b + e ) / 2;
 
    segment ( left , b , middle );
 
    segment ( right , middle + 1 , e );
 
    tree[n] = tree[left] + tree[right];
}
 
int query ( int n , int b , int e , int i , int j ){
 
    if ( b > j || e < i ){
 
        return 0 ;
    }
 
    if ( b >= i && e <= j ){
 
        return tree[n];
    }
 
 
    int left = n * 2;
 
    int right = n * 2 + 1;
 
    int middle = ( b + e ) / 2;
 
    int x = query ( left , b , middle , i , j );
 
    int y = query ( right , middle + 1 , e , i , j );
 
    return x + y;
}
 
void update ( int n , int b , int e , int i , int v ){
 
    if (i > e || i < b){
 
        return;
    }
 
    if ( b >= i && e <= i ){
 
        tree[n] += v;
 
        return;
    }
 
    int left = n * 2;
 
    int right = n * 2 + 1;
 
    int middle = (b + e) / 2;
 
    update ( left , b , middle , i , v );
 
    update ( right , middle + 1 , e , i , v );
 
    tree[n] = tree[left] + tree[right];
}

void test(){
	
	lli n,q;
	
	cin>>n>>q;
	
	lli arr[n+1];
	
	
}
 
int main(){
 
    int t;
 
    scanf ( "%d", &t );
    
}

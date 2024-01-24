#include<bits/stdc++.h>

using namespace std;
 string s , x;
int  n ;
  

 int main (){
 
	  int n  , k , b ;
	   cin >> n >> k >> b;
	   
	   int a[n + 5];
	 	for( int i  = 0 ; i < n  + 5 ; i++){
	 		a[i] = 1;
		 }
	    for(int i  = 1 ;  i <= b ; i++){
	    	 int x ; cin >> x;
	    	  a[x] = 0;
		}
		 int tmp = 0;
//		  so bong khong hong
		  int ans = INT_MAX ;
		  for(int i = 1 ; i <= k ; i++){
		  	tmp += a[i];
		  }
//		   for( auto x : a){
//		   	 cout << x << endl;
//		   }
//		    k - tmp la so bong hong 
		  ans = min (ans  , k - tmp);
//		   so bong toi thieu can sua 
// 			cout << ans  << endl;
		  for(int i = k + 1 ; i <= n ; i++){
		  	 tmp+= a[i];
		  	  tmp -= a[i - k];
		  	  ans = min(ans  , k - tmp);
		  }
		  
		   cout << ans << endl;
 }

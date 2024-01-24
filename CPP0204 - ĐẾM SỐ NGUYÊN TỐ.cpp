#include<bits/stdc++.h>

using namespace std;
// dem so nguyen to trong mang
int nt(long long n){
	if ( n < 2 ) return false;
	for ( int i = 2; i <= sqrt(n);i++){
		if ( n % i == 0) return false;
	} 
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		int tmp = 0;
		int n = 2;
		int a[10000];
		for ( int i = 0; i < n;i++){
			cin >> a[i];
		} 
		for ( int j = a[0]; j <= a[1];j++){
			if ( nt(j)) ++tmp;
		}
		cout << tmp << endl;
	}
	return 0;
}

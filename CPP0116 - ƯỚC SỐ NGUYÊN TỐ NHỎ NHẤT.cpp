#include<bits/stdc++.h>

using namespace std;
// uoc so nguyen to nho nhat
// n = 6
int find(int n){
	for ( int i = 2; i <= sqrt(n);i++){
		if (n % i == 0) return i;
	}
	return n;
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >>n;
		for ( int i = 1; i <=n ;i++) {
			cout << find(i) << " " ;
		}
		cout << endl;
	}
	return 0;
}

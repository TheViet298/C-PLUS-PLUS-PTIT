#include<bits/stdc++.h>
// uoc chia het cho 2
using namespace std;

int Kiemtra(int n){
	int tmp = 0;
	for ( int i = 1; i <= sqrt(n);i++){
		if( n % i == 0){
			if ( i % 2 == 0) ++tmp;
			if ( (n/i) % 2 == 0) ++tmp;
			if ( (i*i == n) && (n % 2 == 0)) --tmp;
		}
	}
	return tmp;
}
int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		cout << Kiemtra(n) << endl;
	}
}

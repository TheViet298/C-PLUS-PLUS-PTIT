#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
ull nt( ull n){
	if ( n < 2 ) return 0;
	for ( ull i = 2 ; i <= sqrt(n); i++){
		if ( n % i == 0) return 0;
	}
	return 1;
}
// so 3 uoc so la binh phuong nguyen to
void solution(){
	ull n; cin >> n;
	ull count = 0;
	for ( ull i = 0; i*i <= n;i++){
		if(nt(i)) count++;
	}
	cout << count << endl;
}
int main(){
	long t;
	cin >> t;
	while(t--){
		solution();
	}
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

using ll = long long;
ll gcd ( ll x, ll y){
	if ( y == 0) return x;
	return gcd(y,x%y);
}
int main(){
	int t; cin >> t;
	while(t--){
		ll a,x,y;
		cin >> a >> x >> y;
		ll tmp = gcd(x,y);
		for ( int i = 1; i <= tmp; i++){
			cout << a;
		} cout << endl;
	}
}

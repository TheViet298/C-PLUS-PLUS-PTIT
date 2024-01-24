#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll bcnn(ll a, ll b){
	return a*b/__gcd(a,b); // bcnn = a*b / ucll
}
int main(){
	int t; cin >> t;
	while(t--){
		ll x,y,z,n;
		cin >> x >> y >> z >> n;
		
		ll bc = bcnn(x,bcnn(y,z));
		
		ll Fist = pow(10,n-1);
		
		ll C = pow(10,n);
		
		ll a= Fist/bc;
		ll b = C/bc;
		
		if(b<1&&a<1){
			cout << "-1" << endl;
			continue;
		} if(a*bc<Fist){
			++a;
			cout << a*bc << endl;
		} else {
			cout << a* bc << endl;
		}
		
	}
}

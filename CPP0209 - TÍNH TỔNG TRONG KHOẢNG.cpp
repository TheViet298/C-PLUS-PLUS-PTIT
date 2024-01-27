#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, q;
		cin >> n >> q;
		int a[n+1];
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		int sum = 0;
		while(q--){
			int l , r;
			cin >> l >> r;
			if ( l > r ) swap(l,r);
			for(int i = l ; i <= r; i++){
				sum += a[i];
			}
			cout << sum << endl;
			sum = 0;
		}
	}
}

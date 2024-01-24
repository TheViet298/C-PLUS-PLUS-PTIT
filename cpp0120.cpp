#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,n;
	cin >> t;
	while(t--){
		int m,n; // khoang m,n
		cin >> m >> n;
		if ( m > n){
			int tmp;
			tmp = m;
			m = n;
			n = tmp;
		}
		int a, b;
		cin >> a >> b;
		int dem = 0;
		for ( int i = m; i <= n; i++){
			if ( i % a == 0) ++dem;
			if ( i % b == 0) ++dem;
			if ( i % a == 0 && i % b == 0) --dem;
		}
		cout << dem << endl;
	}
}

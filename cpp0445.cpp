#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for (int &x : a) cin >> x;
		sort(a,a+n);
		int cnt =0;
		for(int i = 0; i < n-1; i++){
			if(a[i] != a[i+1]) cnt++;
		}
		if (cnt == 0) cout << "-1";
		else cout << a[0] << ' ' << a[1];
		cout << endl;
	}
}

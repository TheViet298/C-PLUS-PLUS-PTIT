#include<bits/stdc++.h>

using namespace std;
int cnt[1000005];

int main(){
	int t; cin >> t;
	while(t--){
		int k, n;
		cin >> k >> n;
		int a[n];
		while(k--){
			for(int i = 0; i < n; i++){
				cin >> a[i];
			}
		}
		for(int x : a) cnt[x]++;
		int max_val = *max_element(a, a+n);
		for(int i = 0; i <= max_val; i++){
			if (cnt[i] != 0){
				cout << a[i] << ' ';
			}
		}
		cout << endl;
	}
}

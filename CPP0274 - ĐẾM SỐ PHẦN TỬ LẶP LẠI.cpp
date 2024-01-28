#include<bits/stdc++.h>

using namespace std;

using ll = long long;
int cnt [1000001];

int main(){
	int t,n;
	cin >> t;
	while(t--){
		int a[10001];
		cin >> n;
		for ( int i = 0; i < n; i++){
			cin >> a[i];
		}
		for ( int x : a){
			cnt[x]++;
		}
		for ( int i = 0; i < n;i++){
			cout << cnt[i] << endl;
		}
	}
}

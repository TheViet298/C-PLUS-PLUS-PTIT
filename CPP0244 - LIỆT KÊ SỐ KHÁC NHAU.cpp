#include<bits/stdc++.h>

using namespace std;
// mang danh dau
int cnt[100001];
int main(){
	int n; cin >> n;
	int max_val = -1e9;
	for ( int i = 0 ; i < n;i++){
		int x; cin >> x;
		cnt[x]++;
		max_val=max(max_val,x);
	}
	int dem = 0;
	for ( int i = 0 ; i <= max_val;i++){
		if ( cnt[i] != 0) {
			cout << i << " ";
		}
	}
}

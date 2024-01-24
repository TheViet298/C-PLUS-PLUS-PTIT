#include<bits/stdc++.h>

using namespace std;
int cnt[100005];
// sort : 3 4 7 10 15 20
// 5 6 7 8 9 12 , k = 4
int main(){
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a,a+n);
		cout << a[k-1] << endl;
	}
}

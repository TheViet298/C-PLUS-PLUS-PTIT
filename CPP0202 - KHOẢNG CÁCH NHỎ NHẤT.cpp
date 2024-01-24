#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a,a+n);
		int min_val = INT_MAX;
		for(int i = 1; i < n-1; i++){
			int min = a[i] - a[i-1]; // gtri sau - truoc : neu nho hon thi cap nhat
			if ( min < min_val){
				min_val = min;
			}
		}
		cout << min_val << endl;
	}
}

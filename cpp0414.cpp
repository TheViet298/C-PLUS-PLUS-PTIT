#include<bits/stdc++.h>
// sap xep chu so
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for ( int i = 0; i < n;i++){
			cin >> a[i];
		}
		set<int> s;
		for (int i = 0; i < n;i++){
			while(a[i] != 0){
				s.insert(a[i]%10);
				a[i] /= 10;
			}
		}
		for(auto it:s)
		cout << it << ' ';
		cout << endl;
	}
}

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		set<int> x;
		for ( int i = 0; i < n;i++){
			int m; cin >> m;
			x.insert (m);
		}
		cout<<*x.rbegin()<<endl; 
	}
}

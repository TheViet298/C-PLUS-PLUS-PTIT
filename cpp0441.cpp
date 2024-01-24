#include<bits/stdc++.h>

using namespace std;
int a[1000005];

int main(){
	int t; cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		bool check = false;
		for(int i = 1; i <= n; i++){
			if(a[i] == x){
				cout << i;
				check = true;
				break;
			}
		}
		if(check == false) cout << "-1";
		cout << endl;
	}
}

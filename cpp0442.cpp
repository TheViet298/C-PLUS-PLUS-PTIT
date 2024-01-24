#include<bits/stdc++.h>

using namespace std;
int a[1000007];

int main(){
	int t; cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		bool check = false;
		for(int i =0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n ; i++){
			if(a[i] == x){
				cout << "1";
				check = true;
				break;
			}
		}
		if(check == false) cout << "-1";
		cout << endl;
	}
}

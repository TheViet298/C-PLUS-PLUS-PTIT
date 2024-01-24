#include<bits/stdc++.h>

using namespace std;
using ll = long long;
void nhap(ll a[], int n){
	for(int i = 0; i < n ;i++){
		cin >> a[i];
	}
	sort(a,a+n);
}

int main(){
	int t; cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll b[n], a[n];
		nhap(a,n);
		for(int i = 0; i < n; i++){
			b[i] = -1;
			for(int j = 0; j < n; j++){
				if(a[j] == i){
					b[i] = a[j];
					break;
				}
			}
		}
		for(int i = 0; i < n; i++){
			cout << b[i] << " ";
		}
		cout << endl;
	}
}

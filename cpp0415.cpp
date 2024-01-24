#include<bits/stdc++.h>

using namespace std;

// tinh tich giua phan tu max mang a va min cua mang b.
using ll = long long;

void nhap(ll a[], int n){
	for(int i = 0 ; i < n; i++){
		cin >> a[i];
	}
	sort(a,a+n); 
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		ll a[n], b[m];
		nhap(a,n);
		nhap(b,m);
		cout << a[n-1]*b[0] << endl;
	}
}

#include<bits/stdc++.h>

using namespace std;
int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n] = {0,1,2};
		for ( int i = 0; i < n;i++){
			cin >> a[i];
		}
		for ( int i = 0; i < n; i++){
			int min_val = i;
			for ( int j = i+1; j < n;j++){
				if ( a[j] < a[min_val]) min_val = j;
			}
			if (min_val != i){
				int tmp = a[i];
				a[i] = a[min_val];
				a[min_val] = tmp;
			}
		}
		// for each
		for ( int x : a){
			cout << x << " ";
		}
		cout << endl;
	}
}

#include<bits/stdc++.h>

using namespace std;

using ll = long long ;
int main(){
	// gia tri cua phan tu trong mang
	char A[15] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
	char B[15] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};
	int t; cin >> t;
	while(t--){
		double tmp = 10;
		char check[15];
		int n; cin >> n;
		for ( int i = 0; i < 15; i++){
			cin >> check[i];
		} 
		for ( int i = 0; i < 15; i++){
			if ( n == 101 ){
				if ( check[i] != A[i]) tmp = tmp -(double) 10/15;
			} 
			else if (n == 102 ){
				if ( check[i] != B[i]) tmp = tmp - (double) 10/15;
			}
		}
		cout << fixed << setprecision(2) << tmp << endl;
	}
}

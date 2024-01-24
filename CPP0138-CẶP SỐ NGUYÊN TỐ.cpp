#include<bits/stdc++.h>

using namespace std;

bool nt(int n){
	if ( n < 2) return false;
	for ( int i = 2; i <= sqrt(n);i++){
		if ( n % i == 0) return false;
	}
	return true;
}
int main(){
	int n,t;
	cin >> t;
	int check = 0;
	while(t--){
		cin >> n;
		for ( int i  = 0; i <= n;i++){
			if (nt(i) && nt(n-i)){
				check  = 1;
				cout << "" << i << " " << n-i << endl;
				break;
			}
		}
	} if ( check == 0) return 0;
}


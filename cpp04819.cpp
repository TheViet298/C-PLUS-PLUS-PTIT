// hop va giao cua hai mang chua sap xep

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, m; cin >> n >> m;
		int a[n + m];
		for ( int i = 0; i < n + m ; i++)
		{
			cin >> a[i];
		}
		// sap xep mang
		sort (a, a+ n + m);
		// 1 2 3 3 5 6 6 7 7 8 20 
		// hop
		for ( int i = 0 ; i < n + m; i++){
			if (a[i] != a[i+1]) {
				cout << a[i] << " ";
			}
		}
		cout << endl;
		for ( int i = 0 ; i < n + m; i++){
			if ( a[i] == a[i + 1]){
				cout << a[i] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}

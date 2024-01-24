#include <bits/stdc++.h>

using namespace std;

int snt  (int n)
{
//	if ( n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if ( n % i == 0) return 0;
	}
	return n > 1;
}
// so tang 
int check1 (int n)
{
	while ( n >= 10){
		int r = n % 10; // so dung sau; 
		// 1234
		// so truoc no la( n / 10 ) % 10;
		if ( r <= ((n / 10) % 10)) return 0;
		n /= 10;
	}
	return 1;
}
// so giam
int check2 (int n)
{
	while ( n >= 10){
		int r = n % 10; // so dung sau; 
		if ( r >= ((n / 10) % 10)) return 0;
		n /= 10;
	}
	return 1;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		// so co n chu so
		int cnt = 0;
		for (int i = pow(10, n - 1); i < pow(10, n); i++)
		{
			if ((check1(i) || check2(i)) && snt(i)){
				++cnt;
			}
//			cout << i << " ";
		}
		cout << cnt << endl;
	}
}

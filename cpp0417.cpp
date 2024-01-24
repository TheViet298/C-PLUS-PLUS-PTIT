#include<bits/stdc++.h>

using namespace std;
// tao gom 2 mang A VA B
// CHO HAI MANG A VA B BANG NHAU
// SAP XEP 1 TRONG 2 MANG A HOAC B 
// XET GIA TRI TAI VI TRI A[I] != B[I] -> push_back(i) : vi tri do 
// cout 

/*
11
A[n] = 10 12 20 30 25 40 32 31 35 50 60
B[n] = 10 12 20 25 30 31 32 35 40 50 60
i    :  1  2  3  4  5  6  7  8  9 10 11
*/
int main()
{
	int t ; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int A[n + 1], B[n + 1];
		queue <int > q;
		// cap nhat mang A = B
		for (int i = 0 ; i < n; i++){
			int x; cin >> x;
			A[i] = x; B[i] = x;
		}
		sort (B, B+n);
		// duyet 
		for (int i = 0 ; i < n; i++){
			if (A[i] != B[i]){
				q.push(i);
			}
		}
		cout << q.front() + 1 << " " << q.back() + 1 << endl;
	}
	return 0;
}

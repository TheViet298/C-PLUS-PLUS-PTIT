#include <bits/stdc++.h>

using namespace std;
/*
124335 _-> 123435 : so lon nhat ma nho hon n;
- tim tu cuoi ve a[i] <= a[i+1] : i--; 
- a[i] > a[i+1] 

*/

void solve ()
{
	string s;
	cin >> s;
	// n = 5, duyet tu 3
	int i = s.length() - 2;
	while ( i >= 0 && s[i] <= s[i+1]){
		i--;
	}
	// neu no thoa man deu giam dan thi in ra -1
	if (i == -1){
		cout << "-1\n";
		return ;
	}
	int j = s.length() - 1; // neu i van con nho hon j;
	while ( s[i] <= s[j] || (s[j-1] == s[j] && ( s[j] < s[i]))){
		--j;               // 2 thang o canh nhau bang nhau va thang dung sau nho hon thang dung truoc
						   // 1243356
	}
	swap(s[i], s[j]);
	if (s[0] == '0'){
		cout << "-1\n";
	}
	cout << s << endl;
}

int main()
{
	int t; cin >> t;

	while (t--)
	{
		solve();
	}
	return 0;
}

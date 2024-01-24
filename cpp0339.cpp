#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		map<char, int> mp;
		for(char x : s){
			mp[x]++;
		}
		long long ans = s.length();
		for(auto it : mp){
			// C2n
			ans += (it.second * (it.second - 1))/ 2;
		}
		cout << ans << endl;
	}
}

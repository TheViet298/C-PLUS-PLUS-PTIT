#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		// nhap chuoi 
		string s; cin >> s;
		int k; cin >> k;
		// check xau phai du 26 ky tu
		if (s.length() < 26){
			cout << 0 << endl; continue;
		}
		// dung set dem ky tu khac nhau co trong xau
		set<char> se;
		for(char x : s){
			se.insert(x);
		}
		// thay doi k lan : 26 - ky tu khac trong xau <= k thì cout << yes
		if (26 - se.size() <= k){
			cout << "1" << endl;
		} else 
			cout << "0" << endl;
	}
}

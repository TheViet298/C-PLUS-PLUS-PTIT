#include<bits/stdc++.h>

using namespace std;


int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; cin >> s;
		for(char &x : s){
			if (isalpha(x)){
				x = ' ';
			}
		}
		vector<string> v;
		stringstream ss(s);
		string tmp ;
		long long tong  = 0;
		while( ss >> tmp){
			tong += stoll(tmp);
		}
		cout << tong << endl;
	}
}

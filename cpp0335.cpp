#include<bits/stdc++.h>

using namespace std;
// ham kiem tra so lon nhat
string max_string(string a, string b){
	// neu no khac do dai
	if ( a.size() != b.size()){
		// thang nao co do dai lon hon thi lon hon
		if ( a.size() < b.size()){
			return b;
		}
		else return a;
	}
	else{
		// thu tu tu dien
		if ( a < b) return b;
		else return a;
	}
}

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
		while( ss >> tmp){
			// check xoa ki tu 0 o dau
			while( tmp.size() > 1 && tmp[0] == '0'){
				tmp.erase(0,1);
			}
			v.push_back(tmp);
		}
		// in ra so lon nhat
		string res = "0";
		for(string x : v){
			res = max_string(res, x);
		}
		cout << res << endl;
	}
}

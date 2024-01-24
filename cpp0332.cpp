#include<bits/stdc++.h>

using namespace std;

void chuanhoa(string &s){
	for(int i = 0; i < s.length(); i++){
		s[i] = tolower(s[i]);
	}
}
// namnv@gmail.com
int main(){
	string s;
	getline(cin, s);
	vector<string> v;
	stringstream ss(s);
	string tmp;
	while( ss >> tmp){
		v.push_back(tmp);
	}
	chuanhoa(v[v.size() - 1]);
	cout << v[v.size() - 1];
	for(int i = 0; i < v.size() - 1; i++){
		chuanhoa(v[i]);
		cout << v[i][0];
	}
	cout << "@ptit.edu.vn";
	cout << endl;
}

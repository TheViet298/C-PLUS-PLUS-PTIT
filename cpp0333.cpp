#include<bits/stdc++.h>

using namespace std;

void chuanhoa(string &s){
	// chu cai dau in hoa
	s[0] = toupper(s[0]);
	// duyet tu ki tu 1 chuyen thanh in thuong
	for(int i = 1; i < s.length(); i++){
		s[i] = tolower(s[i]);
	} 
}
void inhoa(string &s){
	for(int i = 0; i < s.length(); i++){
		s[i] = toupper(s[i]);
	}
}
int main(){
	string s;
	getline(cin, s);
	vector<string> v;
	stringstream ss(s);
	string tmp = "";
	while(ss >> tmp){
		v.push_back(tmp);
	}
	for(int i = 0; i < v.size() - 1; i++){
		chuanhoa(v[i]);
		cout << v[i];
		// 
		if ( i == v.size() - 2){
			cout << ", ";
		} else
			cout << " ";
	}
	inhoa(v[v.size() - 1]);
	cout << v[v.size() - 1];
}

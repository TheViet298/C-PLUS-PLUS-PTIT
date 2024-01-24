#include<bits/stdc++.h>

using namespace std;

int main(){
	string s1;
	getline(cin,s1);
	string s2; cin >> s2;
	stringstream ss(s1);
	string tmp;
	// tach tu
	while(ss >> tmp){
		if (tmp != s2)
			cout << tmp << " ";
	}
	cout << endl;
}

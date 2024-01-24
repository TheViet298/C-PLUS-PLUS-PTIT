#include<bits/stdc++.h>

using namespace  std;

int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s1;
		getline(cin, s1);
		string s2;
		getline(cin, s2);
		
		stringstream ss(s1), ss1(s2);
		set<string> se1, se2;
		
		string tmp;
		while(ss >> tmp){
			se1.insert(tmp);
		}
		string tmp2;
		while(ss1 >> tmp2){
			se2.insert(tmp2);
		}
		for(auto it : se1){
			if(se2.count(it) == 0){
				cout << it << " ";
			}
		}
		cout << endl;
	}
}

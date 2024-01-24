#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		int sum = 0, chay = 0;
		// chuyen nhi phan sang thap phan = sum(2^i)
		for(int i = s.length()-1; i >= 0; i--){ // xet tu vi tri 0 trong chuoi 
			if(s[i] == '1') sum += pow(2,chay);
			chay++;
		}
		int cnt = sum;
		if(cnt % 5 == 0){
			cout << "Yes" ;
		} else cout << "No";
		cout << endl;
	}
}

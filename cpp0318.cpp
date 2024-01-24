#include <bits/stdc++.h>

using namespace std;
//29T1-123.45
// 5 6 7 9 10
bool check(const string& s) {
    // Check for strictly increasing sequence
    if (s[5] < s[6] && s[6] < s[7] && s[7] < s[9] && s[9] < s[10]) {
        return true;
    }
    return false;
}

bool check2(const string& s) {
    // Check if first three digits are equal and last two digits are equal
    if (s[5] == s[6] && s[6] == s[7] && s[9] == s[10]) {
        return true;
    }
    return false;
}

bool check3(const string& s) {
    // Check for lucky numbers 6 and 8
    if (s[5] == '6' || s[5] == '8') {
        if (s[6] == '6' || s[6] == '8') {
            if (s[7] == '6' || s[7] == '8') {
                if (s[9] == '6' || s[9] == '8') {
                    if (s[10] == '6' || s[10] == '8') {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

int main() {
	int t; cin >> t;
	cin.ignore();
	while (t--)
	{
		string s;
		getline (cin, s);
		if (check(s) || check2(s) || check3(s)){
			cout << "YES\n";
		} else
			cout << "NO\n";
	}
}


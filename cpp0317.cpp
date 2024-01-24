#include <iostream>
#include <string>
using namespace std;

bool isThuanNghich(string& s) {
    int left = 0;
    int right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

bool check_event(string& s) {
    for (char c : s) {
        int digit = c - '0';
        if (digit % 2 != 0) {
            return false;
        }
    }
    return true;
}

bool so_dep(string& s) {
    return isThuanNghich(s) && check_event(s);
}

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string s;
        getline(cin, s);

        if (so_dep(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}


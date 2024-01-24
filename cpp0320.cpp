#include <iostream>
#include <string>
using namespace std;

bool isInvalid(const string& s) {
    // Ki?m tra xem chu?i có ký t? không ph?i s? ho?c b?t d?u b?ng ch? s? 0 hay không
    if (s[0] == '0') {
        return true;
    }
    for (char c : s) {
        if (!isdigit(c)) {
            return true;
        }
    }
    return false;
}

bool hasAllDigits(const string& s) {
    bool digits[10] = { false };

    for (char c : s) {
        int digit = c - '0';
        digits[digit] = true;
    }

    for (int i = 0; i < 10; i++) {
        if (!digits[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string s;
        getline(cin, s);

        if (isInvalid(s)) {
            cout << "INVALID" << endl;
            continue;
        }

        if (hasAllDigits(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}


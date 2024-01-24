#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }

    string tmp = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != 'a' && s[i] != 'o' && s[i] != 'e' && s[i] != 'i' && s[i] != 'u' && s[i] != 'y') {
            tmp = tmp + "." + s[i];
        }
    }

    cout << tmp << endl;

    return 0;
}

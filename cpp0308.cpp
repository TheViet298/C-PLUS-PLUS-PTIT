#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int a[1000] = {0}; // kh?i t?o m?ng d�nh d?u
        for (int i = 0; i < s.length(); i++) {
            a[s[i]]++;// d�nh d?u k� t? d� xu?t hi?n
        }
        for (int i = 0; i < s.length(); i++) {
            if ( a[s[i]] == 1) { // n?u k� t? chua xu?t hi?n
            	cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}

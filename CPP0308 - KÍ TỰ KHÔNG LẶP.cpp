#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int a[1000] = {0}; // KHOI TAO MANG DANH DAU
        for (int i = 0; i < s.length(); i++) {
            a[s[i]]++;// DANH DAU KY TU XUAT HIEN
        }
        for (int i = 0; i < s.length(); i++) {
            if ( a[s[i]] == 1) {
            	cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}

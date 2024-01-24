#include <iostream>
#include <sstream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); 

    while (t--) {
        string s1;
        getline(cin, s1);
        string s2;
        getline(cin, s2);

        vector<string> v;
        set<string> se;
        string str;
        string tmp;

        stringstream ss2(s2);
        while (ss2 >> str) {
            se.insert(str);
        }

        stringstream ss1(s1);
        while (ss1 >> tmp) {
            if (se.find(tmp) == se.end() && find(v.begin(), v.end(), tmp) == v.end()) {
                v.push_back(tmp);
            }
        }

        sort(v.begin(), v.end()); 

        for (auto it : v) {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}


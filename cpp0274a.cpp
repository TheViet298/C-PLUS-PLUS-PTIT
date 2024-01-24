#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_map<int, int> cnt;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            cnt[x]++;
        }
        int res = 0;
        for (auto p : cnt) {
            if (p.second > 1) {
                res++;
            } 
        }
        
        cout << res << endl;
    }
    return 0;
}



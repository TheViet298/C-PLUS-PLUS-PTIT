#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, p;
        cin >> x >> y >> p;
        int res = 1;
        while (y) {
            if (y & 1) {
                res = (1LL * res * x) % p;
            }
            x = (1LL * x * x) % p;
            y >>= 1;
        }
        cout << res << endl;
    }
    return 0;
}


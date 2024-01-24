#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000005;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        bool visited[MAXN] = {false};
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x > 0 && x < MAXN) {
                visited[x] = true;
            }
        }

        int ans = 1;
        while (visited[ans]) {
            ans++;
        }

        cout << ans << endl;
    }

    return 0;
}


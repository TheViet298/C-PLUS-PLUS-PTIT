#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        int h1 = 0, h2 = m - , c1 = 0, c2 = n - 1;
        int dem = 0;
        while (dem < n * m) {  // Changed condition from `<=` to `<`
            for (int i = c1; i <= c2 && dem < n * m; i++) {  // Added condition `dem < n * m`
                cout << a[h1][i] << " ";
                ++dem;
            }
            ++h1;
            for (int i = h1; i <= h2 && dem < n * m; i++) {  // Added condition `dem < n * m`
                cout << a[i][c2] << " ";
                ++dem;
            }
            --c2;
            for (int i = c2; i >= c1 && dem < n * m; i--) {  // Added condition `dem < n * m`
                cout << a[h2][i] << " ";
                ++dem;
            }
            --h2;
            for (int i = h2; i >= h1 && dem < n * m; i--) {  // Added condition `dem < n * m`
                cout << a[i][c1] << " ";
                ++dem;
            }
            ++c1;
        }
        cout << endl;
    }
    return 0;
}


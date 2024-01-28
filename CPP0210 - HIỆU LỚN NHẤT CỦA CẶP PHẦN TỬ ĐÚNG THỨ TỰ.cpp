#include <iostream>
#include <climits>
using namespace std;

const int MAXN = 1000;

int maxDiff(int a[], int n) {
    int minSoFar = INT_MAX;
    int maxDiff = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] < minSoFar) {
            minSoFar = a[i];
        } else {
            int diff = a[i] - minSoFar;
            if (diff > maxDiff) {
                maxDiff = diff;
            }
        }
    }
    return maxDiff;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        int a[MAXN];
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int result = maxDiff(a, n);
        if (result == -1) {
            cout << "-1" << endl;
        } else {
            cout << result << endl;
        }
    }
    return 0;
}


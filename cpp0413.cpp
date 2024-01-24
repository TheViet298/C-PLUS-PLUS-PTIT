#include <iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int l = 0, r = n - 1;
        while (l <= r) {
            if (l == r) {
                cout << arr[l];
                break;
            }
            else
                cout << arr[r] << ' ' << arr[l] << ' ';
            l++;
            r--;
        }
        cout << endl;
    }

    return 0;
}

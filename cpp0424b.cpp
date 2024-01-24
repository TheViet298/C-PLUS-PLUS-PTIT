#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k, n;
        cin >> k >> n;

        vector<priority_queue<int, vector<int>, greater<int>>> a(k);

        for (int i = 0; i < k; i++) {
            for (int j = 0; j < n; j++) {
                int x;
                cin >> x;
                a[i].push(x);
            }
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for (int i = 0; i < k; i++) {
            pq.push(make_pair(a[i].top(), i));
            a[i].pop();
        }

        while (!pq.empty()) {
            pair<int, int> p = pq.top();
            pq.pop();
            cout << p.first << " ";

            int i = p.second;
            if (!a[i].empty()) {
                pq.push(make_pair(a[i].top(), i));
                a[i].pop();
            }
        }

        cout << endl;
    }
    return 0;
}


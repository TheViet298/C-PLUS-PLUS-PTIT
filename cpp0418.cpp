#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int j = 0; j < m; j++)
        {
            cin >> b[j];
        }
        int i = 0, j = 0;
        sort (a.begin(), a.end());
        sort (b.begin(), b.end());
        vector<int> hop;
        vector<int> giao;
        while (i < n && j < m)
        {
            if (a[i] == b[j])
            {
                hop.push_back(a[i]);
                giao.push_back(a[i]);
                i++;
                j++;
            }
            else if (a[i] < b[j])
            {
                hop.push_back(a[i]);
                i++;
            }
            else
            {
                hop.push_back(b[j]);
                j++;
            }
        }
        while (i < n)
        {
            hop.push_back(a[i]);
            i++;
        }
        while (j < m)
        {
            hop.push_back(b[j]);
            j++;
        }
        for (int i = 0; i < hop.size(); i++)
        {
            cout << hop[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < giao.size(); i++)
        {
            cout << giao[i] << " ";
        }
        cout << endl;
    }
    return 0;
}



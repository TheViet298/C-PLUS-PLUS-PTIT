#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<string> v;
        string tmp;

        while (ss >> tmp)
        {
            v.push_back(tmp);
        }

        reverse(v.begin(), v.end());

        for (auto it : v)
        {
            cout << it << " ";
        }

        cout << endl;
    }

    return 0;
}


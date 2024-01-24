#include <iostream>
#include <vector>
#include <string>
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
        int n = s.size();
        vector<int> nums;
        vector<int> result;
        
        // luu gia tri 
        for (int i = 1; i <= n + 1; i++)
        {
            nums.push_back(i);
        }
        
        // kiem tra xau s , duyêt xau
        // D
        // output 21
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'D')
            {
                int j = i;
                while (i < n && s[i] == 'D')
                {
                    i++;
                }
                reverse(nums.begin() + j, nums.begin() + i + 1);
            }
        }

        for (int num : nums)
        {
            result.push_back(num);
        }

        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i];
        }

        cout << endl;
    }

    return 0;
}


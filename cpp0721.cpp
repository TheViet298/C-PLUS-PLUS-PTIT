#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// n = 6
// 5 8 3 7 9 1

int longestIncreasingSubsequence(vector<int>& nums) {
    int n = nums.size();
    vector<int> dp(n, 1); // luu vi tri 

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (nums[i] > nums[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    int maxLength = 0;
    for (int i = 0; i < n; i++) {
        maxLength = max(maxLength, dp[i]);
    }

    return maxLength;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        int result = longestIncreasingSubsequence(nums);
        cout << result << endl;
    }

    return 0;
}


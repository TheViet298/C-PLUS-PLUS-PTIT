#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool canRearrangeString(string& s) {
    unordered_map<char, int> freq;
    
    // Count the frequency of each character
    for (char c : s) {
        freq[c]++;
    }
    
    // Find the character with maximum frequency
    int maxFreq = 0;
    char maxChar;
    for (const auto& p : freq) {
        if (p.second > maxFreq) {
            maxFreq = p.second;
            maxChar = p.first;
        }
    }
    
    // Check if it is possible to rearrange the string
    if (maxFreq > (s.length() + 1) / 2) {
        return false;
    }
    
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        if (canRearrangeString(s)) {
            cout << "1\n";
        } else {
            cout << "0\n";
        }
    }

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0; 
    for (int i = 0; i < n; i++) {
        int ones = 0; // so luong so 1 
        int zeros = 0; // so luong so 0
        for (int j = 0; j < 3; j++) {
            int num;
            cin >> num;
            if (num == 1) {
                ones++;
            } else {
                zeros++;
            }
        }
        if (ones > zeros) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}


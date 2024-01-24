#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int min_val = 1;
        // 1 2 3 5
        for(int i = 0; i < n-1; i++){
            cin >> a[i];
            if(a[i] < 0) a[i] = 0;
            if(a[i] == min_val) min_val++;
        }
        cout << min_val << "\n";
    }
}

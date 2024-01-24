#include<bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[100000];
        int max_val = INT_MIN;
        int min_val = INT_MAX;
        for(int i = 0; i < n ; i++){
            cin >> a[i];
            max_val = max(max_val,a[i]);
            min_val = min(a[i], min_val);
        }
        int cnt = 0;
        for(int i = min_val; i <= max_val; i++){
            bool flag = true;
            for(int j = 0; j < n; j++){
                if(i==a[j]){
                    flag = false;
                    break;
                }
            }
            if (flag) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}


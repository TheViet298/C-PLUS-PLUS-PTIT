#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, d;
        cin >> n >> d;
        int *a = new int[n]; // dynamic memory allocation
        for(int i = 0; i < n; i++) cin >> a[i];
        d %= n; //d < n
        for(int i = d ; i < n; i++){
            cout << a[i] << ' ';
        }
        for(int j = 0; j < d; j++){
            cout << a[j] << ' ';
        }
        cout << endl;
        delete[] a; // 
    }
}


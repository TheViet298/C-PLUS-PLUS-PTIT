#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>

using namespace std;

struct NhanVien {
    string ma;
    string ten, gt, ns, dc, mst, hd;
};

bool comp(NhanVien &A, NhanVien &B) {
    return A.ns > B.ns;
}

void nhap(NhanVien &x, int index) {
    cin.ignore();
    getline(cin, x.ten);
    cin >> x.gt >> x.ns;
    cin.ignore();
    getline(cin, x.dc);
    cin >> x.mst >> x.hd;

    // Generate ma
    string s = to_string(index + 1);
    while (s.length() < 5)
        s = "0" + s;
    x.ma = s;
}

void inds(NhanVien a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i].ma << " " << a[i].ten << " " << a[i].gt << " " << a[i].ns << " " << a[i].dc << " " << a[i].mst << " " << a[i].hd << endl;
    }
}

void sapxep(NhanVien a[], int n) {
    sort(a, a + n, comp);
}

int main() {
    struct NhanVien ds[40];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i], i);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}


#include <iostream>
#include <string>
using namespace std;

struct NhanVien {
    string ma;
    string ten, sex, ns, dc, mst, time;
};

void nhap(NhanVien& x) {
    cin.ignore();
    getline(cin, x.ten);
    cin >> x.sex >> x.ns;
    cin.ignore();
    getline(cin, x.dc);
    cin >> x.mst >> x.time;
}

void inds(NhanVien a[], int n) {
    for (int i = 0; i < n; i++) {
        string s = to_string(i + 1);
        while (s.size() < 5)
            s = "0" + s;
        cout << s << " ";
        cout << a[i].ten << " " << a[i].sex << " " << a[i].ns << " " << a[i].dc << " " << a[i].mst << " " << a[i].time << endl;
    }
}

int main() {
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    inds(ds, N);
    return 0;
}


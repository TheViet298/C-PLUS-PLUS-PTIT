#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct SinhVien {
    string ten, lop, ns;
    float gpa;
};

void nhap(SinhVien a[], int n) {
    cin.ignore();
    for (int i = 0; i < n; i++) {
        getline(cin, a[i].ten);
        cin >> a[i].lop >> a[i].ns >> a[i].gpa;
        // Chuan hoa ngay
        if (a[i].ns[2] != '/') {
            a[i].ns = "0" + a[i].ns;
        }
        if (a[i].ns[5] != '/') {
            a[i].ns.insert(3, "0");
        }
        cin.ignore();
    }
}

void in(SinhVien a[], int n) {
    for (int i = 0; i < n; i++) {
        string s = to_string(i + 1);
        while (s.size() < 3)
            s = "0" + s;
        cout << "B20DCCN" + s << " ";
        cout << a[i].ten << " " << a[i].lop << " " << a[i].ns << " " << fixed << setprecision(2) << a[i].gpa << endl;
    }
}

int main() {
    SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}


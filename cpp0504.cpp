#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct SinhVien {
    string ho_ten;
    string lop;
    string ns;
    float gpa;
};

void nhap(SinhVien& x) {
    getline(cin, x.ho_ten);
    cin >> x.lop;
    cin.ignore();
    cin >> x.ns;
    cin >> x.gpa;
}

string check_NS(const string& ns) {
    string fix_ns = ns;
    if (fix_ns[2] != '/') fix_ns = "0" + fix_ns;
    if (fix_ns[5] != '/') fix_ns.insert(3, "0");
    return fix_ns;
}

void in(const SinhVien& y) {
    cout << "B20DCCN001" << " " << y.ho_ten << " " << y.lop << " " << check_NS(y.ns) << " " << fixed << setprecision(2) << y.gpa << endl;
}

int main() {
	struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}


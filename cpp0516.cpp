#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>

using namespace std;

struct MatHang {
	string ma;
	string loi_nhuan;
	string mat_hang, nhom_hang;
	float gia_mua, gia_ban;
};

void nhap(MatHang a[], int n) {
	cin.ignore();
	for (int i = 0; i < n; i++) {
		getline(cin, a[i].mat_hang);
		getline(cin, a[i].nhom_hang);
		cin >> a[i].gia_mua >> a[i].gia_ban;
		cin.ignore();

		// Ma mat hang
		string s = to_string(i + 1);
		a[i].ma = s;
	}
}

float tinhLoiNhuan(MatHang &x) {
	return x.gia_ban - x.gia_mua;
}

bool comp(MatHang &a, MatHang &b) {
	return tinhLoiNhuan(a) > tinhLoiNhuan(b);
}

void in(MatHang a[], int n) {
	for (int i = 0; i < n; i++) {
		float loi_nhuan = tinhLoiNhuan(a[i]);
		cout << a[i].ma << " " << a[i].mat_hang << " " << a[i].nhom_hang << " " << fixed << setprecision(2) << loi_nhuan << endl;
	}
}

void sapxep(MatHang a[], int n) {
	sort(a, a + n, comp);
}

int main() {
	MatHang mh[50];
	int n;
	cin >> n;
	nhap(mh, n);
	sapxep(mh, n);
	in(mh, n);
	return 0;
}


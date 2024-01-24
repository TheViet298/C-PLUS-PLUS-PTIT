#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct ThiSinh {
    string ho_ten;
    string ngay_sinh;
    float d1;
    float d2;
    float d3;
};

void nhap(ThiSinh &x) {
    getline(cin, x.ho_ten);
    cin >> x.ngay_sinh;
    cin.ignore();
    cin >> x.d1 >> x.d2 >> x.d3;
}

void in(ThiSinh A) {
    cout << A.ho_ten << " " << A.ngay_sinh << fixed << setprecision(1) << " "<< A.d1 + A.d2 + A.d3 << endl;
}

int main() {
    ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}


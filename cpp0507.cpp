#include <iostream>
#include <algorithm>

using namespace std;

struct PhanSo {
    int ts;
    int ms;
};

void nhap(PhanSo& x) {
    cin >> x.ts;
    cin >> x.ms;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void rutgon(PhanSo& y) {
    int ucln = gcd(y.ts, y.ms);
    y.ts /= ucln;
    y.ms /= ucln;
}

PhanSo tong(const PhanSo& s, const PhanSo& t) {
    PhanSo sum;
    sum.ts = s.ts * t.ms + t.ts * s.ms;
    sum.ms = s.ms * t.ms;
    rutgon(sum);
    return sum;
}

void in(const PhanSo& Z) {
    cout << Z.ts << "/" << Z.ms << endl;
}

int main() {
    PhanSo p, q;
    nhap(p);
    nhap(q);
    PhanSo t = tong(p, q);
    in(t);
    return 0;
}


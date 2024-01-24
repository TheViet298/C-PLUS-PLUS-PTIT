#include<bits/stdc++.h>

using namespace std;

struct PhanSo{
	int ts;
	int ms;
};

void nhap (PhanSo &x){
	cin >> x.ts;
	cin >> x.ms;
}
void rutgon(PhanSo &y){
	int a = y.ts;
	int b = y.ms;
	int ucln = __gcd(a,b);
	y.ts /= ucln;
	y.ms /= ucln;
}
void in(PhanSo Z){
	cout << Z.ts << "/" << Z.ms << endl;
}

int main(){
	PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}

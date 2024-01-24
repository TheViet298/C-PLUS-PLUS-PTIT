#include<bits/stdc++.h>

using namespace std;

struct NhanVien{
	string ma = "00001";
	string ho_ten;
	string sex;
	string ns;
	string dc;
	int ds;
	string time;
};
// nhap
void nhap(NhanVien &x){
	getline(cin, x.ho_ten);
	cin >> x.sex >> x.ns;
	cin.ignore();
	getline(cin, x.dc);
	cin >> x.ds >> x.time;
}
// in
void in(NhanVien y){
	cout << y.ma << " " << y.ho_ten << " " << y.sex << " " << y.ns << " " << y.dc << " " << y.ds << " " << y.time << endl;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}

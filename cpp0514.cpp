#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

struct SinhVien {
    string ten, lop, ns;
    float gpa;
};

// Tach tu
vector<string> splitString(const string& str) {
    vector<string> v;
    stringstream ss(str);
    string token;
    while (ss >> token) {
        v.push_back(token);
    }
    return v;
}

// Chuan hoa ten
void chuanhoa(string& s) {
    if (!s.empty()) {
        s[0] = toupper(s[0]);
        for (int i = 1; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }
    }
}

void nhap(SinhVien a[], int n) {
    cin.ignore();
    for (int i = 0; i < n; i++) {
        getline(cin, a[i].ten);
        cin >> a[i].lop >> a[i].ns >> a[i].gpa;
        cin.ignore();

        // Chuan hoa ngay
        if (a[i].ns[2] != '/')
            a[i].ns = "0" + a[i].ns;
        if (a[i].ns[5] != '/')
            a[i].ns.insert(3, "0");
    }
}

void in(SinhVien a[], int n) {
    for (int i = 0; i < n; i++) {
        string s = to_string(i + 1);
        while (s.size() < 3)
            s = "0" + s;
        cout << "B20DCCN" + s << " ";
        vector<string> names = splitString(a[i].ten);
        for (const auto& name : names) {
            string temp = name;
            chuanhoa(temp);
            cout << temp << " ";
        }
        cout << a[i].lop << " " << a[i].ns << " " << fixed << setprecision(2) << a[i].gpa << endl;
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


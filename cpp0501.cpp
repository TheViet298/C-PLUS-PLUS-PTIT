#include <bits/stdc++.h>

using namespace std;

struct Point
{
	double x, y;	
};
// ham nhap 2 toa do cua tung diem A, B
void input (Point& p)
{
	cin >> p.x >> p.y;
}
// ham in
double distance (const Point& A, Point& B)
{
	// doan AB : XA - XB , YA - YB
	double dx = B.x - A.x;
	double dy = B.y - A.y;
	return sqrt(dx*dx + dy*dy);
}
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}

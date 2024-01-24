#include <string>
#include <iostream>

using namespace std;

long long check1(string &s)
{
    string tmp = s;
    for (int i = 0; i < tmp.length(); i++)
    {
        if (tmp[i] == '5')
        {
            tmp[i] = '6'; 
        }
    }
    return stoll(tmp);
}

long long check2(string &s)
{
    string tmp = s;
    for (int i = 0; i < tmp.length(); i++)
    {
        if (tmp[i] == '6')
        {
            tmp[i] = '5'; 
        }
    }
    return stoll(tmp);
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string x1, x2;
		cin >> x1;
		cin >> x2;
		long long ans3 = check2(x1);
		long long ans4 = check2(x2);
		cout << ans3 + ans4 << " ";
		long long ans1 = check1(x1);
		long long ans2 = check1(x2);
		cout << ans1 + ans2 << endl;
	}
}


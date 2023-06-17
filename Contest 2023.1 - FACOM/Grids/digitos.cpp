#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    string s;
    getline(cin >> ws, s);
    int resp = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 48 and s[i] <= 57)
            resp++;
    }
    cout << resp << endl;
    return 0;
}

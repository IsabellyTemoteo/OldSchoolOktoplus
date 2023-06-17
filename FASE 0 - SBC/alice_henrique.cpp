#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    string s;
    cin >> s;

    if (s == "XXO" || s == "OXX"){
        cout << "Alice" << endl;
    }
    else if (s == "XOX")
    {
        cout << '*' << endl;
    }
    else
    {
        cout << '?' << endl;
    }
    return 0;
}

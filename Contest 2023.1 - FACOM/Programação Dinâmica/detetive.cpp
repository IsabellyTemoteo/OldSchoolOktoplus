/**
 * Henrique Junqueira
 * Isabelly Temoteo
 * Vinícius Lima
 * CEFET, Leopoldina
 */
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    int n;
    while (true)
    {
        cin >> n;
        if (n == 0)
            return 0;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            v.push_back(make_pair(input, i));
        }
        sort(v.rbegin(), v.rend());
        cout << v[1].second + 1 << endl;
        v.clear();
    }
    return 0;
}

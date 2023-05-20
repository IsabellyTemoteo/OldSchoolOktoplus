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
    ll c, p;
    while (true)
    {
        cin >> c;
        if (c == 0)
            break;
        cin >> p;
        ll y = (p - 2 * c) / 2;
        cout << c - y << ' ' << y << endl;
    }
    return 0;
}

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

ull phi(ull n);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ull n;
    while (cin >> n) {
        cout << phi(n)/2 << endl;
    }
    return 0;
}

ull phi(ull n) {
    ull result = n;
    for(ull p = 2; p * p <= n; ++p) {
        if (n % p == 0) {
            while (n % p == 0)
                n /= p;
            result -= result / p;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}

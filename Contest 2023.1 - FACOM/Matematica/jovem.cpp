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

bool sumSquare(ll n);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    while (cin >> n) {
        cout << (sumSquare(n) ? 1 : 0) << endl;
    }
    return 0;
}

bool sumSquare(ll n) {
    unordered_map<ll, ll> s;
    for (ll i = 0; i * i <= n; ++i) {
        s[i * i] = 1;
        if (s.find(n - i * i) != s.end()) {
            return true;
        }
    }
    return false;
}

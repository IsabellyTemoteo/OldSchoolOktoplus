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

ll lcm(ll n);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    while (cin >> n) {
        cout << lcm(n) << endl;
    }
    return 0;
}

ll lcm(ll n) {
    ll ans = 1;   
    for (ll i = 1; i <= n; i++)
        ans = (ans * i)/(__gcd(ans, i));
    return ans;
}


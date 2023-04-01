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

vector<ll> primeFactors(ll n);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    while (cin >> n) {
        vector<ll> aux  = primeFactors(n);
        cout << (aux.size() == 2 ? 1 : 0) << endl;
        aux.clear();
    }
    return 0;
}

vector<ll> primeFactors(ll n) {
    vector<ll> v;
    ll c = 2;
    while (n > 1) {
        if (n % c == 0) {
            v.push_back(c);
            n /= c;
        }
        else c++;
    }
    return v;
}

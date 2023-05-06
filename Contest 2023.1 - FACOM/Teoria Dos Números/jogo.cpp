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

vector<ull> v;

void primeFactors(ull n) {
    ull c = 2;
    while (n > 1) {
        if (n % c == 0) {
            //cout << c << ' ';
            v.push_back(c);
            n /= c;
        }
        else c++;
    }
}

bool isPrime(ull n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    for (ull i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ull n; cin >> n;
    primeFactors(n);
    ull resp = 0;
    for (ull i = 0; i < v.size(); i++) {
        if (isPrime(v[i]))
            resp++;
    }
    cout << (resp == 2 ? 1 : 0) << endl;
    return 0;
}

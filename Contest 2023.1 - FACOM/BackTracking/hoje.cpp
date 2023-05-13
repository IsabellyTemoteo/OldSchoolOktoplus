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
    double t;
    vector<double> v;
    while (cin >> t) {
        v.push_back(t);
    }
    cout << fixed << setprecision(1);
    sort(v.begin(), v.end());
    cout << v.front() << ' ' << v.back() << endl;
    return 0;
}

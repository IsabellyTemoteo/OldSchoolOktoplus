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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    vector<int> v;
    while (cin >> N) {
        v.push_back(N);
    }
    sort(v.begin(), v.end());
    int repetido = v[0], cont = 1;
    for (int i = 1; i < v.size(); i++) {
        if (v[i] == repetido) cont++;
        else {
            cout << repetido << " " << cont << endl;
            cont = 1;
            repetido = v[i];
        }
    }
    cout << repetido << " " << cont << endl;
    return 0;
}


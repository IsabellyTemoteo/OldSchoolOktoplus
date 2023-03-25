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

void solve(vector<string> v);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    vector<string> v;
    while (getline(cin >> ws, s)) {
        v.push_back(s);
    }
    solve(v);
    return 0;
}

void solve(vector<string> v) {
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
}


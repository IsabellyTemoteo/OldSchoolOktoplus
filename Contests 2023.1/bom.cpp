#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve(string f, char l);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    char l; cin >> l;
    string f; getline(cin >> ws, f);
    solve(f, l);
    return 0;
}

void solve(string f, char l) {
    int resp = 0;
    for (int i = 0; i < f.length(); i++) {
        if (f[i] == tolower(l) or f[i] == toupper(l)) resp++;
    }
    cout << resp << endl;
}

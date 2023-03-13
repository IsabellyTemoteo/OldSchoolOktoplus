#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve(int c, string p);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int c; cin >> c;
        string p; getline(cin >> ws, p);
        solve(c, p);
    }
    return 0;
}

void solve(int c, string p) {
    for (int i = 0; i < p.length(); i++) {
        if (p[i] + c > 90) p[i] -= 26;
		else if (p[i] + c < 65) p[i] += 26;
		p[i] = p[i] + c;
    }
    cout << p << endl;
}

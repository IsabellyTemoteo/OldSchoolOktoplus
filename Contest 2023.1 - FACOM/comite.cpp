#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m, n;
    while (cin >> m >> n) {
        double sum = 1;
        for(int i = 1; i <= n; i++)
            sum = sum * (m - n + i) / i;
        cout << (ull)sum << endl;
    }
    return 0;
}

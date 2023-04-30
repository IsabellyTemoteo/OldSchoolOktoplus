#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void fib(ull f[], ull N) {
    f[1] = 1;
    f[2] = 1;
    for (ull i = 3; i <= N; i++)
        f[i] = f[i - 1] + f[i - 2];
}
 
void fiboTriangle(ull n) {
    ull N = n * (n + 1) / 2;
    ull f[N + 1];
    fib(f, N);

    ull fiboNum = 1;
    for (ull i = 1; i <= n; i++) {
        for (ull j = 1; j <= i; j++) {
            if (j == i && j != 1)
                cout << f[fiboNum++] << '*';
            else cout << f[fiboNum++] << " "; 
        }
        cout << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ull n; cin >> n;
    fiboTriangle(n);
    return 0;
}

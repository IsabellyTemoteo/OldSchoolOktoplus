#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void printPascal(int n) {    
    for (int line = 1; line <= n; line++) {
        int C = 1;
        for (int i = 0; i < n-line; i++)
            cout << '-';
        for (int i = 1; i <= line; i++) {
            cout << C << " ";
            C = C * (line - i) / i;
        }
        cout << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    printPascal(n);
    return 0;
}

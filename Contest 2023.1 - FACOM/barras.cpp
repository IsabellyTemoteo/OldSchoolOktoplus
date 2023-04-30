/**
 * Henrique Junqueira 
 * Isabelly Temoteo
 * CEFET, Leopoldina
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int fatorial(int n)
{
    int ret = 1;
    while (n > 1)
        ret *= n--;
    return ret;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    cout << fatorial(13-n-1);

    return 0;
}


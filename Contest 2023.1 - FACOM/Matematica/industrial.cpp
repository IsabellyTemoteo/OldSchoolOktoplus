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
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << fixed << setprecision(2);
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int xmat[2][2] = {0};
    int ymat[2][2] = {0};
    int mat[2][2] = {0};

    mat[0][0] = a;
    mat[0][1] = b;
    mat[1][0] = d;
    mat[1][1] = e;
    double dmat = a*e - b*d;

    xmat[0][0] = c;
    xmat[0][1] = b;
    xmat[1][0] = f;
    xmat[1][1] = e;
    double dxmat = c*e - b*f;

    ymat[0][0] = a;
    ymat[0][1] = c;
    ymat[1][0] = d;
    ymat[1][1] = f;
    double dymat = a*f - d*c;

    cout << dxmat/dmat << ' ' << dymat/dmat << endl;

    return 0;
}

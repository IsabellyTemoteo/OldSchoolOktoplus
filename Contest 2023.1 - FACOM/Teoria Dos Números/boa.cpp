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

ull mdc(ull num1, ull num2)
{
    if(num1%num2 == 0)
        return num2;
    else
        return mdc(num2, num1%num2);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ull x, y;

    while(cin >> x >> y){
    ull lmc = mdc(x,y);
    cout << x/lmc << " " << y/lmc << endl;

    }

    return 0;
}


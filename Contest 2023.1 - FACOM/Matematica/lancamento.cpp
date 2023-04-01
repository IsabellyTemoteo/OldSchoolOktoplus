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
    float a, b, c, x1, x2, discriminant;
    cin >> a >> b >> c;
    discriminant = b*b - 4*a*c;
    
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << x1 << ' ' << x2 << endl;
    }
    
    else if (discriminant == 0) {
        x1 = -b/(2*a);
        cout << x1 << ' ' << x1 << endl;
    }

    else {
        cout << "Nulo" << endl;
    }
    return 0;
}




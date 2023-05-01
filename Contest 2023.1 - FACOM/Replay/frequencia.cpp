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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    float a = 0, b = 0, ne = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;

        if(x >= 0 && x < 7) a++;
        if(x > 7 && x <=14) b++;
        if(x == 7) ne++;
    }

    cout << fixed << setprecision(3);
    cout << "acido " << a/n << endl;
    cout << "neutro " << ne/n << endl;
    cout << "basico " << b/n;


    return 0;
}

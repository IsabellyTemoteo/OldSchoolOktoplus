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

    ull n;
    while(cin >> n){
        ull sn = ((1 + n)*n)/2;
        cout << sn << endl;
    }

    return 0;
}

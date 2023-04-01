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
    double x, y; 
    
    while(cin >> x >> y){
        cout << fixed << setprecision(2);
        cout << min(x,y)/2+max(x,y) << endl;
    }

    return 0;
}


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
    ull n; cin >> n;
    set<ull> numbers;
    for(ull i = 0; i < n; i++){
        ull x; cin >> x;
        numbers.insert(x);
    }

    cout << numbers.size() << endl;

    return 0;
}

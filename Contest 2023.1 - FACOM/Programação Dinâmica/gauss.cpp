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
    ll x; cin >> x;
    
    for(ll i = 0; i < x; i++){
        ll a1, an;
        cin >> a1 >> an;

        ll n = an-a1+1;
        cout << ((a1 + an) * n)/2 << endl;
    }
   
    return 0;
}
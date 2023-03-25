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
    string s, s2; cin >> s >> s2;

    sort(s.begin(), s.end());
    sort(s2.begin(), s2.end());

    if(s ==  s2) cout << 1 << endl;
    else cout << 0 << endl;

    return 0;
}

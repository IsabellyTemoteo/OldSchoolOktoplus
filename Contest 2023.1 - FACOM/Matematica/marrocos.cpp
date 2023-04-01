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
    ull a, b;

    while(cin >> a >> b){
        vector<ull> valores;
        string s1, sInversa;
        for(ull i = a+1; i < b; i++){
            s1 = to_string(i); sInversa = s1;
            reverse(sInversa.begin(),sInversa.end());

            if(sInversa == s1) valores.push_back(i);
        }
        
        sort(valores.begin(), valores.end());
        if(valores.empty()) cout << -1 << endl;
        else if(valores.size() >= 2) cout << valores.front() << " " << valores.back() << endl;
        else
            cout << valores[0] << endl;
    }

    return 0;
}




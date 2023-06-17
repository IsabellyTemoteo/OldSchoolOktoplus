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
    int t; cin >> t;

    for(int i = 0; i < t; i++){
        string prog, juiz;

        getline(cin >> ws, prog);
        getline(cin >> ws, juiz);

        cout << "Caso " << i+1 << ": ";
        if(prog == juiz)
            cout << "Yes" << endl;
        else{
            prog.erase(std::remove_if(prog.begin(), prog.end(), ::isspace), prog.end());
            juiz.erase(std::remove_if(juiz.begin(), juiz.end(), ::isspace), juiz.end());
            if(prog == juiz)
                cout << "Output Format Error" << endl;
            else cout << "Wrong Answer" << endl;
        }
    }

    return 0;
}
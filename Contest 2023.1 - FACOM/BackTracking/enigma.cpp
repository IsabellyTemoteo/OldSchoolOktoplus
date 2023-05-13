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
    string palavra; cin >> palavra;
    char aux=palavra[0], aux2;

    for(int i=0; i<palavra.size(); i++){
        aux2=palavra[i];
        if(aux>aux2){
            cout<<"0"<<endl;
            return 0;
        }
        aux=aux2;
    }
    cout<<"1"<<endl;
    return 0;
}

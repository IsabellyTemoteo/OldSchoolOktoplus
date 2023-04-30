/**
 * Henrique Junqueira 
 * Isabelly Temoteo
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

    string s;
    getline(cin, s);

    int vog = 0, cons = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'A'|| s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            vog++;
        else if(s[i] == ' ')
            continue;
        else cons++;
    }

    ll soma = 1;
    while(vog != 0 && cons != 0){
        if(vog != 0)
            soma *= vog;
        if(cons != 0)
            soma *= cons;

        vog--;
        cons--;
    }

    cout << soma/2 << endl;

    

    return 0;
}


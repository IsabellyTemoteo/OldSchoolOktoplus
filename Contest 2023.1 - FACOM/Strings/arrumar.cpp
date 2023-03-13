/**
 * Henrique Junqueira 
 * Isabelly Temoteo
 * CEFET, Leopoldina
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

/**
void solve(string s);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s; cin >> s;
    solve(s);
    return 0;
}

void solve(string s) {
    string aux = "";
    for (int i = s.length(); i >= 0; i--) {
        aux += s[i];
    }
    cout << (aux == s ? "sim" : "nao") << endl; 
}

*/

int main(){
    string s; cin >> s;
    string cpy = (s.rbegin(), s.rend());

    bool ok = true;
    for(int i = 0; i < s.size(); i++){
        if(cpy[i] != s[i]) ok = false;
    }

    if(ok == false) cout << "nao" << endl;
        else cout << "sim" << endl;

}

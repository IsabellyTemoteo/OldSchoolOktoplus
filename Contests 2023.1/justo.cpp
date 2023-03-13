#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;


/**
void solve(int n, string v);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; string v;
    while (cin >> n >> v) {
        solve(n, v);
    }
    return 0;
}

void solve(int n, string v) {
    string aux = "";
    for (int i = 0; i < v.length(); i++) {
        if (v[i] == n - 'a') aux += v[i];
    }
    cout << aux << endl;
}
*/

int main(){
    int n; string s;

    while(cin >> n >> s){
        char ch = '0' + n;
        string chars = "";
        chars += ch;
      
        string zero = "0";
        
        int tamanho = s.size();
        for (char c: chars) {
          s.erase(remove(s.begin(), s.end(), c), s.end());
        }
      
        for (char c: zero) {
          if(s[0] == 0)
            s.erase(remove(s.begin(), s.end(), c), s.end());
        }

        if(s == "") cout << 0 << endl;
        else cout << s << endl;
 
    }

    return 0;
}

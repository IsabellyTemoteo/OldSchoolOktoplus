#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve(string s);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    while (getline(cin >> ws, s)) {
        solve(s);
    }
    return 0;
}

void solve(string s) {
    string aux = "";
    string rev = "";
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
        if (isalpha(s[i])) {
            if (s[i] == ' ') continue;
            else aux += s[i];
        }
    }
    for (int i = s.length() - 1; i >= 0; i--) {
        s[i] = tolower(s[i]);
        if (isalpha(s[i])) {
            if (s[i] == ' ') continue;
            else rev += s[i];
        }
    }
    cout << (aux == rev ? "sim" : "nao") << endl;
    cout << aux << endl;
    cout << rev << endl;
}

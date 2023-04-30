#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

/**ull factorial(int N);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string s; getline(cin >> ws, s);
        cout << factorial(s.size()) << endl;
    }
    return 0;
}

ull factorial(int N) {
    ull f = 1;
    for (ull i = 2; i <= N; i++)
        f *= i;
    return f;
}
*/


ll fatorial(ll n){
    if(n<=1)
        return 1;
    else
        return n*fatorial(n-1);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    for (int i = 0; i < n; i++){
        string s;
        getline(cin >> ws, s);
        int letras[26] = {0};
        for (int j = 0; j < s.size(); j++) {
            s[j] = tolower(s[j]);
            letras[s[j]-'a']++;
        }

        ll div = 1;

        for (int j = 0; j < 26; j++)
            if(letras[j] > 1)
                div *= fatorial(letras[j]);
        
        
        ll fat = fatorial(s.size());
        cout << fat / div << endl;
    }
    
    return 0;
}

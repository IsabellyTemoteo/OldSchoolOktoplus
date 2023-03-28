#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ull n; cin >> n;
    ull x; 

    unordered_set<int> numeros;
    ull maiorSoma = 1;
    for(ull i = 0; i < n; i++){
        cin >> x;
        if (numeros.find(x) != numeros.end()) {
            if(numeros.size() > maiorSoma) maiorSoma = numeros.size();
            numeros.clear();
            numeros.insert(x);
        }
        else {
            numeros.insert(x);
        }
    }

    cout << maiorSoma << endl;

    return 0;
}


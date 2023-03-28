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
    string N;
    vector<string> S;
    while(cin >> N){
        int tam = N.size(); 
        int soma = 0;
        for(int i = 0; i < N.size();i++) soma += N[i]-'0';
            int number = 0;
        for(int i = tam; i >= tam-5 && i > 0; i--) {
            int num = N[i-1]-'0';
            number += num * pow(10, tam-i);
        }
        if(number % 2 != 0){
            S.push_back(N);
            cout << N << endl;
        }
    }

    sort(S.begin(), S.end());
    for(int i = 0; i < S.size(); i++){
        cout << S[i] << endl;
    }
    

    return 0;
}

/*
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    set<string> s;
    while (cin >> str) {
        if ((str[str.size() - 1] + '0') & 1)
            s.insert(str);
    }
    for (auto x : s) {
        cout << x << endl;
    }
    return 0;
}
4729 7
*/

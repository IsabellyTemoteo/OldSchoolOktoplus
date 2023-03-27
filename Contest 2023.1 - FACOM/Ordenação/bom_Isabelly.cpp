#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

bool cmp(pair<int, char> p1, pair<int, char> p2) {
    if (p1.first == p2.first) return p1.second < p2.second;
    else return p1.first > p2.first;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    string frasesJuntas = "";
    for(int i = 0; i < n; i++){
        string s;
        getline(cin >> ws, s);
        
        for(int i = 0; i < s.size(); i++){
            char c = s[i];
            if(s[i] >= 65 && s[i] <= 90){
                frasesJuntas+=c;
            }
            if(s[i] >= 97 && s[i] <= 122){
                c = c-32;
                frasesJuntas+=c;
            }
        }
    }

    sort(frasesJuntas.begin(), frasesJuntas.end());

    vector<pair<int, char>> quantidades;
    int soma = 1;
    frasesJuntas+=125;
    for(int i = 1; i < frasesJuntas.size(); i++){
        if(frasesJuntas[i] == frasesJuntas[i-1]){
            soma++;
        }
        else{
            quantidades.push_back(make_pair(soma, frasesJuntas[i-1]));
            soma = 1;
        }
    }

    sort(quantidades.begin(), quantidades.end(), cmp);
  
    for(int i = 0; i < quantidades.size(); i++)
        cout << quantidades[i].second << " " << quantidades[i].first << endl;


    return 0;
}



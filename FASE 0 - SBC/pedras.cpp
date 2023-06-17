//Isabelly Araújo Temoteo
// - Belly s2

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    vector<ull> chutes, erros;
    for(int i = 0; i < n; i++){
        ull x; cin >> x;
        chutes.push_back(x);
    }

    for(int i = 0; i < n; i++){
        ull x; cin >> x;
        erros.push_back(x);
    }

    multiset<ull> save;

    for(int i = 0; i < n; i++){
        ull numero = chutes[i] - erros[i];

        if(numero < 0) numero *= -1;
        save.insert(numero);

        numero = chutes[i] + erros[i];
        save.insert(numero);
    }

    unordered_map<int, int> frequency;
    for (const auto& num : save) {
        frequency[num]++;
    }

    int maiorFreqAtual = 0;
    vector<int> maiorFrequencia;

    // Encontrar a frequência máxima
    for (const auto& pair : frequency) {
        if (pair.second > maiorFreqAtual) {
            maiorFreqAtual = pair.second;
            maiorFrequencia.clear();
            maiorFrequencia.push_back(pair.first);
            
        } else if (pair.second == maiorFreqAtual) {
            maiorFrequencia.push_back(pair.first);
        }
    }

    sort(maiorFrequencia.begin(), maiorFrequencia.end());
    for (const auto& num : maiorFrequencia) {
        cout << num << endl;
    }


    return 0;
}
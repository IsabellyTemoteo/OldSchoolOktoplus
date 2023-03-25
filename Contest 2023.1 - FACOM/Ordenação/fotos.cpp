#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cont=0;
    string aux,aux2;
    vector<string> nomes;
    vector<pair<string,int>> letrado;

    while(getline(cin, aux))
    {
        nomes.push_back(aux);
        aux2.clear();
        for(int c=0;c<aux.size();c++) if((aux[c]>='a'&&aux[c]<='z')||((aux[c]>='A'&&aux[c]<='Z'))) aux2+=tolower(aux[c]);
        letrado.push_back(make_pair(aux2,cont));
        cont++;
    }

    sort(letrado.begin(),letrado.end());

    for(int c=0;c<nomes.size();c++) cout << nomes[letrado[c].second] << '\n';

    return 0;
}
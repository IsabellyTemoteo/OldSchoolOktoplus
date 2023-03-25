#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    vector<int> indentificacao;
    set<int> num;

    while(cin >> N)
    {
        if(N%2)
        {
            if(!(num.find(N)!=num.end()))
            {
                indentificacao.push_back(N);
                num.insert(N);
            }
        }
    }

    sort(indentificacao.begin(),indentificacao.end());

    for(int c=0;c<indentificacao.size();c++) cout << indentificacao[c] << '\n';

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    vector<int> vet = {0,2,4,8,12,10};
    while(cin >> n){
        ull soma = 0;

        for(int i = 1; i < vet.size(); i++){
            if(n > 5){
                
            }
            if(n >= i && n != 0)
                soma += vet[i];
            
        }

        cout << soma << endl;
    }


    return 0;
}

/**
1
    2
2
    4
3
    8
4
    12
5
    10
*/
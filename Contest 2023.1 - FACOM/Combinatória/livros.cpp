#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

ull fatorial(int N){
    ull f = 1; 
    for (ull i = 2; i <= N; i++)
        f *= i;
    return f;
}



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x,y,z;
    while(cin >> x >> y >> z){
        ull soma = fatorial(x)*fatorial(y)*fatorial(z)*6;
        cout << soma << endl;
    }

    return 0;
}


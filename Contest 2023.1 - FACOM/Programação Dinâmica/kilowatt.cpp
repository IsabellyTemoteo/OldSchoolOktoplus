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
typedef long double ld;

/***
int main()
{
    ull n,a,b,c,d;
    long double  media, ano;
    cin>>n;

    cout.precision(2);
    cout.setf(ios::fixed);

    for(int i=0; i<n; i++){
        cin>>a>>b>>c>>d;
        ano=c-a;
        media=(d-b)/ano;
        cout<<media<<endl;
    }

    return 0;
}
*/

int main()
{
    int N, A, B, C, D;

    cin >> N;

    while (N-- > 0)
    {
        cin >> A >> B >> C >> D;
        double res = (double) (D - B) / (C - A);
        cout << to_string(res).substr(0, log10(res) + 4) << endl;
    }

    return 0;
}


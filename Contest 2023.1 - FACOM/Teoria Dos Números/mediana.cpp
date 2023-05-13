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


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ull n;
    vector<ull> num;
    while(cin >> n)
        num.push_back(n);
    
    sort(num.begin(), num.end());

    cout << fixed << setprecision(1);
    if(num.size()%2 == 0){
        cout << ((long double)num[(num.size()-1)/2] + (long double)num[(num.size()+1)/2])/2 << endl;
    }
    else cout << (long double)num[num.size()/2] << endl;

    return 0;
}


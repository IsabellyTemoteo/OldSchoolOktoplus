/**
 * Henrique Junqueira 
 * Isabelly Temoteo
 * Vinícius Lima
 * CEFET, Leopoldina
*/

/*#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

vector<ull> f;

void trial_division2(ull n) {
    while (n % 2 == 0) {
        f.push_back(2);
        n /= 2;
    }
    for (ull d = 3; d * d <= n; d += 2) {
        while (n % d == 0) {
            f.push_back(d);
            n /= d;
        }
    }
    if (n > 1)
        f.push_back(n);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ull n; cin >> n;
    trial_division2(n);

    cout << f[0] << " " << f[1] << " " << f[2] << endl; 

    if(f[0] * f[1] * f[2] == n) cout << f[0] << " " << f[1] << " " << f[2] << endl;
    else cout << 0 << endl;

    return 0;
}
*/




#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve(ull n);

int main()
{
    ull n;
    while(cin>>n){
        solve(n);
    }
    return 0;
}

void solve(ull n) {
    ull x, y, z;
    for(x=0; x<n; x++){
        y=x+1;
        z=y+1;
        if(x*y*z==n){
            cout<<x<<" "<<y<<" "<<z<<endl;
            return;
        }
    }
    cout<<"0"<<endl;
}


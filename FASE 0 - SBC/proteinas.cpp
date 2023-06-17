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

    int a, b; 
    cin >> a >> b;

    string dna, prot;
    cin >> dna >> prot;

    int n; cin >> n;

    for(int i = 0; i < n; i++){

        int x, y; cin >> x >> y;
        string subs = prot.substr(x - 1, y - x + 1);

        int sum = 0;

        for (int j = 0; j <= dna.length() - subs.length(); j++) {
            if (dna.substr(j, subs.length()) == subs)
                sum++;
        }

        cout << sum << endl;


    }



    return 0;
}
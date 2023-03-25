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

int main(){
    int n; cin >> n;
    vector<int> alturas;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        alturas.push_back(x);
    }
    sort(alturas.begin(), alturas.end());

    vector<int> team1, team2;
    for(int i = n; i >= 1; i--){
        if(i%2 == 0) team1.push_back(alturas[i]);
        else team2.push_back(alturas[i]);
    }

    for(auto x: team1) cout << x << " ";
    cout << endl;
    for(auto x: team2) cout << x << " ";

    return 0;
}

/*
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve(vector<int> v);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<int> v; int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }
    solve(v);
    return 0;
}

void solve(vector<int> v) {
    sort(v.rbegin(), v.rend());
    vector<int> t1;
    vector<int> t2;
    for (int i = 0; i < v.size(); i++) {
        if (i & 1) t2.push_back(v[i]);
        else if (!(i & 1) and t1.size() < v.size()/2) t1.push_back(v[i]);
        else t2.push_back(v[i]);
    }
    for (int i = 0; i < t1.size(); i++) {
        cout << t1[i] << ' ';
    } cout << endl;
    for (int i = 0; i < t2.size(); i++) {
        cout << t2[i] << ' ';
    } cout << endl;
}  

*/

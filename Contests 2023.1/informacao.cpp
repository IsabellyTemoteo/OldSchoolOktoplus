#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve(string s, string t);

/**
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s, t;
    while (cin >> s >> t) {
        solve(s,t);
    }
    return 0;
}

void solve(string s, string t) {
    cout << (t.find(s) != std::string::npos ? "sim" : "nao") << endl;
}

*/

int main(){

    string one, two;
    while(cin >> one >> two){
        bool ok = true;

        for(int i = 0; i < two.size(); i++){
            if(two[i] == one[0]){
                one.erase(0,1);
            }

            if(one == ""){
                cout << "sim" << endl;
                ok = false;
                break;
            }

        }

        if(ok == true) cout << "nao" << endl;
    }
    

    return 0;
}

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

/**
int main(){
    string s; cin >> s;
    ll n; cin >> n;

    for(int i = 0; i < n; i++){
          bool ok = true;
          string comp; cin >> comp;
          for(int j = 0; j < s.size(); j++){
              if(s[i] == comp[0]){
                  comp.erase(0,1);
              }

              if(comp == ""){
                  cout << "1" << endl;
                  ok = false;
                  break;
              }

          }

          if(ok == true) cout << "0" << endl;
    }

    return 0;
}
*/

bool isSubsequence(string A, string subsequence) {
    ll i = 0, j = 0, n = A.size(), m = subsequence.size();  

    while (i < n && j < m) {
        if (A[i] == subsequence[j]) {
            i++;
            j++;
        } 
        else
            i++;
    }

    return j == m;
}

int main() {
    string A;
    ll N;

    cin >> A;
    cin >> N;

    vector<int> answer;

    for (ll i = 0; i < N; i++) {
        string subsequence;
        cin >> subsequence;

        if (isSubsequence(A, subsequence)) 
            answer.push_back(1);
        else 
            answer.push_back(0);
    }

    for(auto x: answer) cout << x << endl;

    return 0;
}
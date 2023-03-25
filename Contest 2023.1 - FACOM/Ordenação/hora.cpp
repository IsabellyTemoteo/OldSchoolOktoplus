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

bool asc(string s1, string s2);
bool dsc(string s1, string s2);

int main(){
    vector<string> v;
    string num;
    while (cin >> num) {
        v.push_back(num);
    }
    sort(v.begin(), v.end(), asc);
    for (auto it : v)
        cout << it << ' ';
    sort(v.begin(), v.end(), dsc);
    cout << endl;
    for (auto it : v)
        cout << it << ' ';
    cout << endl;
    return 0;
}

bool asc(string s1, string s2) {
    if (s1.size() == s2.size())
        return s1 < s2;
    else
        return s1.size() < s2.size();
}

bool dsc(string s1, string s2) {
    if (s1.size() == s2.size())
        return s1 > s2;
    else
        return s1.size() > s2.size();
}


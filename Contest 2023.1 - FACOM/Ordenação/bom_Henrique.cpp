#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, char> p1, pair<int, char> p2) {
    if (p1.first == p2.first) return p1.second < p2.second;
    else return p1.first > p2.first;
}

int main()
{
    int N; cin >> N;
    multiset<char> ms;
    set<char> st;
    for (int i = 0; i < N; i++) {
        string s;
        getline(cin >> ws, s);
        for (int i = 0; i < s.size(); i++) {
            if (isalpha(s[i])) {
                s[i] = toupper(s[i]);
                ms.insert(s[i]);
                st.insert(s[i]);
            }
        }
    }
    vector<pair<int, char>> v;
    for (auto x : st) {
        v.push_back(make_pair(ms.count(x), x));
    }
    sort(v.begin(), v.end(), cmp);
    for (auto x : v) {
        cout << x.second << ' ' << x.first << endl;
    }
    return 0;
}
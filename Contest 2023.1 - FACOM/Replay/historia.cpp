#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; multiset<int> ms;
    set<int> s;
    while (cin >> t) {
        s.insert(t);
        ms.insert(t);
    }
    set<int>::reverse_iterator rit;
    for (rit = s.rbegin(); rit != s.rend(); rit++)
        cout << *rit << ' ' << ms.count(*rit) << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    vector<pair<string,string>> times;
    while(getline(cin >> ws, s)){
        string aux_s="";
        for(int i = 0; i < s.size(); i++){
            char c = s[i];
            if(s[i] >= 65 && s[i] <= 90) aux_s+=c;
            if(s[i] >= 97 && s[i] <= 122){
                c = c-32;
                aux_s+=c;
            }
        }
        times.push_back(make_pair(aux_s, s));
    }

    sort(times.begin(), times.end());
    for(int i = 0; i < times.size(); i++)
        cout << times[i].second << endl;


    return 0;
}


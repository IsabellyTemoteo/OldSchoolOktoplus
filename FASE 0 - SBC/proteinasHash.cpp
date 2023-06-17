//Isabelly Araújo Temoteo
// - Belly s2

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const ll MOD = 1e9 + 7;
const ll P = 31;

ll computeHash(const string& s) {
    ll hashValue = 0;
    ll pPow = 1;

    for (char c : s) {
        hashValue = (hashValue + (c - 'a' + 1) * pPow) % MOD;
        pPow = (pPow * P) % MOD;
    }

    return hashValue;
}

int main() {
    int a, b;
    cin >> a >> b;

    string dna, prot;
    cin >> dna >> prot;

    int n;
    cin >> n;

    unordered_map<ll, int> protFrequency;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        string subs = prot.substr(x - 1, y - x + 1);

        ll subsHash = computeHash(subs);
        protFrequency[subsHash]++;
    }

    for (const auto& pair : protFrequency) {
        ll subsHash = pair.first;
        int freq = pair.second;

        ll dnaHash = computeHash(dna.substr(0, subsHash.length()));
        int matchCount = 0;

        if (dnaHash == subsHash) {
            matchCount++;
        }

        ll pPow = 1;
        for (int i = subs.length(); i < dna.length(); i++) {
            dnaHash = (dnaHash - (dna[i - subs.length()] - 'a' + 1) * pPow % MOD + MOD) % MOD;
            dnaHash = (dnaHash * P + dna[i] - 'a' + 1) % MOD;
            pPow = (pPow * P) % MOD;

            if (dnaHash == subsHash) {
                matchCount++;
            }
        }

        cout << matchCount * freq << endl;
    }

    return 0;
}
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

bool isPossible(ull n);
vector<ull> generatePrimes(ull n);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ull n; 
    while (cin >> n) {
        cout << (isPossible(n) ? 1 : 0) << endl;
    }
    return 0;
}

vector<ull> generatePrimes(ull n) {
    vector<bool> isPrime(n + 1, true);
    vector<ull> primes;
    for (ull i = 2; i <= n; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (ull j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return primes;
}

bool isPossible(ull n) {
    vector<ull> primes = generatePrimes(n);
    for (ull i = 0; i < primes.size(); i++) {
        ull diff = n - primes[i];
        if (diff < 2) {
            break;
        }
        bool isDiffPrime = true;
        for (ull j = 2; j <= sqrt(diff); j++) {
            if (diff % j == 0) {
                isDiffPrime = false;
                break;
            }
        }
        if (isDiffPrime) {
            return true;
        }
    }
    return false;
}
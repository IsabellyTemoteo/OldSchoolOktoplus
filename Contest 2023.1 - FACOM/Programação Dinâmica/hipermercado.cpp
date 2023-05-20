#include <bits/stdc++.h>
using namespace std;

int main()
{
    int V, N, vet[1001];

    cin >> V >> N;

    for (int i = 0; i < N; i++)
        cin >> vet[i];

    if (count(vet, vet + N, V))
    {
        cout << 'S' << endl;
        return 0;
    }

    sort(vet, vet + N);

    for (int i = 1; i < N; i++)
        vet[i] += vet[i - 1];

    cout << (count(vet, vet + N, V) ? 'S' : 'N') << endl;

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int familiares[N];
    int Time1[N];
    int time1I = 0;
    int Time2[N];
    int time2I = 0;

    for (int i = 0; i < N; i++)
    {
        int altura;
        cin >> altura;
        familiares[i] = altura;
    }

    sort(familiares, familiares+N);

    int time = 0;

    for (int i = N - 1; i >= 0; i--)
    {
        if(i == 0) {
            if(time1I < time2I) {
                Time1[time1I] = familiares[i];
                time1I++;
            }
            else {
                Time2[time2I] = familiares[i];
                time2I++;
            }
        } else {
            if (time == 0)
            {
                Time1[time1I] = familiares[i];
                time1I++;
                time = 1;
            } else {
                Time2[time2I] = familiares[i];
                time2I++;
                time = 0;
            }
        }
    }

    for (int i = 0; i < time1I; i++)
    {
        cout << Time1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < time2I; i++)
    {
        cout << Time2[i] << " ";
    }


    return 0;
}
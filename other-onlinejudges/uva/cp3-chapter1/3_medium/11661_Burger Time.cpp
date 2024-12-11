// https://onlinejudge.org/external/116/11661.pdf
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int L;
    while (cin >> L, L != 0)
    {
        string S;
        cin >> S;

        int minDistance = L;
        int lastR = -L, lastD = -L;

        // Linearly scan the highway
        for (int i = 0; i < L; ++i)
        {
            if (S[i] == 'Z') // Restaurant and drugstore
            {
                minDistance = 0;
                break;
            }
            else if (S[i] == 'R') // Restaurant
            {
                minDistance = min(minDistance, i - lastD);
                lastR = i;
            }
            else if (S[i] == 'D') // Drugstore
            {
                minDistance = min(minDistance, i - lastR);
                lastD = i;
            }
        }

        cout << minDistance << endl;
    }
}
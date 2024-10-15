// https://onlinejudge.org/external/125/12503.pdf
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int T, N;
    cin >> T;

    while (T--)
    {
        cin >> N;
        int position = 0;
        string instruction;
        int instructions[N];
        for (int i = 0; i < N; i++)
        {
            cin >> instruction;
            if (instruction == "LEFT")
            {
                position--;
                instructions[i] = -1;
            }
            else if (instruction == "RIGHT")
            {
                position++;
                instructions[i] = 1;
            }
            else
            {
                int index;
                // Get 2nd and 3rd part of string:
                cin >> instruction >> index;

                position += instructions[index - 1];
                instructions[i] = instructions[index - 1];
            }
        }

        cout << position << endl;
    }
}
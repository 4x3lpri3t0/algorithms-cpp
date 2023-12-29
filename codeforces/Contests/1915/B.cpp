// https://codeforces.com/contest/1915/problem/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int T, n;
    cin >> T;

    while ( T-- > 0)
    {
        // Read char matrix of size 3x3:
        char matrix[3][3];
        for (int i = 0; i < 3; i++)
        {
            string strInput;
            cin >> strInput;
            // Parse string of 3 characters to matrix row:
            for (int j = 0; j < 3; j++)
            {
                matrix[i][j] = strInput[j];
            }
        }

        // Iterate matrix and find '?' character:
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (matrix[i][j] == '?')
                {
                    // Init set with 'A', 'B', 'C' characters:
                    set<char> s = {'A', 'B', 'C'};

                    // Remove characters from set that are in the same row:
                    for (int k = 0; k < 3; k++)
                    {
                        if (matrix[i][k] != '?')
                        {
                            s.erase(matrix[i][k]);
                        }
                    }

                    // Output the remaining  character from the set:
                    cout << *s.begin() << endl;
                }
            }
        }
    }
}
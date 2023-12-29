// https://codeforces.com/contest/1915/problem/D
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int T, n;
    cin >> T;

    while (T-- > 0)
    {
        cin >> n;
        // Read string
        string strInput;
        cin >> strInput;

        // Init C set with 'b', 'c', and 'd' characters:
        set<char> C = {'b', 'c', 'd'};

        string strOutput = "";

        int i = 0;
        while (i < n)
        {
            // Check if character i + 3 is a vowel or a consonant:
            bool isConsonant = C.find(strInput[i + 3]) != C.end();

            int rem = n - i;
            if (rem <= 3)
            {
                if (rem == 3)
                {
                    strOutput += strInput[i];
                    strOutput += strInput[i + 1];
                    strOutput += strInput[i + 2];
                }
                else if (rem == 2)
                {
                    strOutput += strInput[i];
                    strOutput += strInput[i + 1];
                }
                break;
            }
            else if (isConsonant)
            {
                // Current syllable is length 3
                strOutput += strInput[i];
                strOutput += strInput[i + 1];
                strOutput += strInput[i + 2];
                i += 3;
            }
            else
            {
                // Current syllable is length 2
                strOutput += strInput[i];
                strOutput += strInput[i + 1];
                i += 2;
            }

            strOutput += '.';
        }

        cout << strOutput << endl;
    }
}
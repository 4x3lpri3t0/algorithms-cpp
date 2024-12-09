// https://codeforces.com/contest/1915/problem/D
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    int TC, n;
    cin >> TC;
    while (TC--)
    {
        cin >> n >> s;

        set<char> C = { 'b', 'c', 'd' };
        string ans = "";

        int i = 0;
        while (i < n)
        {
            // Check if character i + 3 is a vowel or a consonant:
            bool isConsonant = C.find(s[i + 3]) != C.end();

            int rem = n - i;
            if (rem <= 3)
            {
                if (rem == 3)
                {
                    ans += s[i];
                    ans += s[i + 1];
                    ans += s[i + 2];
                }
                else if (rem == 2)
                {
                    ans += s[i];
                    ans += s[i + 1];
                }
                break;
            }
            else if (isConsonant)
            {
                // Current syllable is length 3
                ans += s[i];
                ans += s[i + 1];
                ans += s[i + 2];
                i += 3;
            }
            else
            {
                // Current syllable is length 2
                ans += s[i];
                ans += s[i + 1];
                i += 2;
            }

            ans += '.';
        }

        cout << ans << endl;
    }
}

// !
// greedy
// strings
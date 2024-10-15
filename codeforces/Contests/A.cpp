// A !
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    ios::sync_with_stdio(0);
    int TC;
    cin >> TC;

    while (TC--)
    {
        string str1;
        cin >> str1;
        string str2;
        cin >> str2;

        int duplicatedCharCount = 0;
        int str1Len = str1.length();
        int str2Len = str2.length();
        int minLength = min(str1Len, str2Len);
        for (int i = 0; i < minLength; i++)
        {
            if (str1[i] != str2[i])
                break;
            duplicatedCharCount++;
        }

        if (duplicatedCharCount > 0)
            duplicatedCharCount--; // Fixed cost to copy is 1, so we only copy if there's at least 1 common char

        cout << str1Len + str2Len - duplicatedCharCount << endl;
    }
}
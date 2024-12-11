// https://onlinejudge.org/external/101/10132.pdf
#include <bits/stdc++.h>
using namespace std;

main()
{
    int TC;
    string input;
    scanf("%d\n\n", &TC);
    while (TC--)
    {
        vector<string> parts;
        int minSize = INT_MAX, maxSize = INT_MIN;

        // Input fragment strings and calculate min and max sizes
        while (getline(cin, input), !input.empty())
        {
            int length = input.length();
            minSize = min(minSize, length);
            maxSize = max(maxSize, length);
            parts.push_back(input);
        }

        // Count concatenations
        unordered_map<string, int> concatCount;
        string bestCombination = "";
        int bestCount = 0;

        // Consider all fragment pair strings
        for (int i = 0; i < parts.size(); i++)
        {
            for (int j = i + 1; j < parts.size(); j++)
            {
                // Only consider pairs that match the expected size (minSize + maxSize)
                if (parts[i].size() + parts[j].size() == (minSize + maxSize))
                {
                    // Concatenate in both possible orders
                    string combine1 = parts[i] + parts[j];
                    string combine2 = parts[j] + parts[i];

                    // Update counts and track the best combination
                    int count1 = concatCount[combine1]++;
                    int count2 = concatCount[combine2]++;
                    if (count1 > bestCount)
                    {
                        bestCombination = combine1;
                        bestCount = count1;
                    }
                    if (count2 > bestCount)
                    {
                        bestCombination = combine2;
                        bestCount = count2;
                    }
                }
            }
        }

        // Output
        cout << bestCombination << endl;
        if (TC) // Extra newline if more test cases remain
            cout << endl;
    }
}
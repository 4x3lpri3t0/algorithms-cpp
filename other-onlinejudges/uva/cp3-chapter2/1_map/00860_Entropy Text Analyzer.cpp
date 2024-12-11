// https://onlinejudge.org/external/8/860.pdf
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    while (getline(cin, line) && line != "****END_OF_INPUT****")
    {
        unordered_map<string, int> wordCount;
        int totalWords = 0;

        // Process input lines until end of text
        do
        {
            // Replace punctuation and special characters with spaces
            line = regex_replace(line, regex("[\\s()\",.:;!?]"), " ");
            transform(line.begin(), line.end(), line.begin(), ::tolower);

            // Extract words and update their count
            istringstream iss(line);
            string word;
            while (iss >> word)
            {
                wordCount[word]++;
                totalWords++;
            }

        } while (getline(cin, line) && line != "****END_OF_TEXT****");

        // Compute entropy (Et) and relative entropy (Erel)
        double entropy = 0.0, relativeEntropy = 0.0;
        if (totalWords > 0)
        {
            double logTotalWords = log10(totalWords);
            for (const auto &entry : wordCount)
            {
                entropy += entry.second * (logTotalWords - log10(entry.second));
            }
            entropy /= totalWords;
            relativeEntropy = entropy * 100.0 / logTotalWords;
        }

        // Output results
        printf("%d %.1f %.0f\n", totalWords, entropy, relativeEntropy);
    }
    return 0;
}
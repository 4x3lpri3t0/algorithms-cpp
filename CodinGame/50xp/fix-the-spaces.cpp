#include <bits/stdc++.h>
using namespace std;

string solution = "";
int solutions = 0;

// Recursive function that returns the original sentence with the necessary spaces added to it:
string addSpaces(string sentence, map<string, int>& wordsMap)  // pass map by reference
{
    // Base case: sentence is empty
    if (sentence.length() == 0)
    {
        return "";
    }

    // Check if sentence can be made from words in set:
    for (int i = 0; i < sentence.length(); i++)
    {
        string subSentence = sentence.substr(0, i + 1);
        if (wordsMap.count(subSentence) > 0 && wordsMap[subSentence] > 0)
        {
            --wordsMap[subSentence];  // Decrement the word count

            string remainingSentence = sentence.substr(i + 1, sentence.length() - i - 1);
            string remainingSentenceWithSpaces = addSpaces(remainingSentence, wordsMap);  // Recursive call

            // Increment the word count back (Backtrack)
            ++wordsMap[subSentence];

            if (remainingSentence.length() == 0)
            {
                ++solutions;
                return subSentence;
            }

            if (remainingSentenceWithSpaces != "")
            {
                solution = subSentence + " " + remainingSentenceWithSpaces;
                return solution;
            }
        }
    }

    return "";
}

int main()
{
    string original;
    getline(cin, original);
    string words;
    getline(cin, words);

    // Convert words string to dictionary of occurrence:
    map<string, int> wordsMap;
    stringstream ss(words);
    string word;
    while (ss >> word)
    {
        ++wordsMap[word];
    }

    string result = addSpaces(original, wordsMap);  // Call the function
    if (solution != "" && solutions == 1)
    {
        cout << solution << endl;
    }
    else
    {
        cout << "Unsolvable" << endl;
    }
}
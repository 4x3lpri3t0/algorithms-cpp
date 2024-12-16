// https://www.codingame.com/ide/puzzle/ascii-art
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int width, height;
    cin >> width >> height;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string text;
    getline(cin, text);

    // Convert text to upper case using a locale-independent method
    transform(text.begin(), text.end(), text.begin(), [](char c)
        { return toupper(static_cast<unsigned char>(c)); });

    for (int i = 0; i < height; i++)
    {
        string row;
        getline(cin, row);
        string output;
        output.reserve(text.length() * width);

        for (char c : text)
        {
            if (!isalpha(static_cast<unsigned char>(c)))
                c = '?'; // Default to '?' for non-alphabet characters

            int position = toupper(static_cast<unsigned char>(c)) - 'A';
            if (position < 0 || position >= 26)
                position = 26; // Handle non-alphabetic characters

            int start = position * width;
            output += row.substr(start, width);
        }

        cout << output << '\n';
    }
}
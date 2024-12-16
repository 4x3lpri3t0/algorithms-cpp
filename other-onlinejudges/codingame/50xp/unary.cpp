// https://www.codingame.com/ide/puzzle/unary
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string message;
    getline(cin, message);

    // Convert message to binary
    string binary = "";
    for (int i = 0; i < message.length(); i++)
    {
        binary += bitset<7>(message[i]).to_string();
    }

    // Convert binary to unary
    string result = "";
    char prev = binary[0];
    int amount = 1;
    for (int i = 1; i < binary.length(); i++)
    {
        if (binary[i] == prev)
            amount++;
        else
        {
            result += prev == '1' ? " 0 " : " 00 ";
            result += string(amount, '0');

            prev = binary[i];
            amount = 1;
        }
    }

    result += prev == '1' ? " 0 " : " 00 ";
    result += string(amount, '0');

    // Remove first space
    result = result.substr(1, result.length());

    cout << result << endl;
}
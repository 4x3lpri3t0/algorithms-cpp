#include <bits/stdc++.h>
using namespace std;

class Algorithm
{
public:
    /* Helper function that converts a char value '0'-'9' to the equivalent int value 0-9 */
    static int charToInt(const char c)
    {
        assert(isdigit(c));
        return (int)c - '0';
    }

    /** input string of digits [0-9]*/
    /** outPairs string including all digits from input in pairs that add up to 9 */
    /** outRemainder string including all digits from input that were unable to be placed in outPairs */
    static void arrangePairs9(const string &input, string &outPairs, string &outRemainder)
    {
        static const int digitToSum9[10] = {0, 9, 8, 7, 6, 5, 4, 3, 2, 1};

        map<int, int> seen = map<int, int>();

        // For each digit in input, find the digit that will add up to 9
        for (int i = 0; i < input.length(); i++)
        {
            int digit = charToInt(input[i]);
            seen[digit]++;
        }

        for (int i = 0; i < input.length(); i++)
        {
            int digit = charToInt(input[i]);
            int digit9 = digitToSum9[digit];
            if (seen[digit] > 0 && seen[digit9] > 0)
            {
                outPairs += input[i];
                seen[digit]--;
                seen[digit9]--;
            }
            else
            {
                outRemainder += input[i];
            }
        }
    }
};

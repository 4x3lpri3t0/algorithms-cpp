// https://leetcode.com/problems/letter-combinations-of-a-phone-number/
class Solution
{
public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> combinations;
        if (digits.length() == 0)
            return combinations;

        vector<string> letters = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        combinations.push_back("");

        for (int i = 0; i < digits.length(); i++)
        {
            vector<string> temp;
            for (int j = 0; j < combinations.size(); j++)
            {
                for (int k = 0; k < letters[digits[i] - '2'].length(); k++)
                {
                    temp.push_back(combinations[j] + letters[digits[i] - '2'][k]);
                }
            }
            combinations = temp;
        }

        return combinations;
    }
};
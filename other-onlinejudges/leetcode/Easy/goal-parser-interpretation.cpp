#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/goal-parser-interpretation/

class Solution
{
public:
    string interpret(string command)
    {
        string res = "";
        for (int i = 0; i < command.length(); i++)
        {
            if (command[i] == 'G')
                res += 'G';
            else if (command[i] == '(' && command[i + 1] == ')')
            {
                res += 'o';
                i++;
            }
            else
            {
                res += "al";
                i += 3;
            }
        }
        return res;
    }
};
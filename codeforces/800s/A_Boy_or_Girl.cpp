// https://codeforces.com/problemset/problem/236/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    
    string username;
    cin >> username;
    
    set<char> uniqueChars;
    for (int i = 0; i < username.length(); i++)
    {
        uniqueChars.insert(username[i]);
    }

    if (uniqueChars.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}
// https://codeforces.com/problemset/problem/281/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string word;
    cin >> word;

    word[0] = toupper(word[0]);
    cout << word;
}
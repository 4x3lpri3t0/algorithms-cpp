// https://codeforces.com/problemset/problem/228/A
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    set<int> shoes;
    shoes.insert({s1, s2, s3, s4});

    cout << 4 - shoes.size();
}
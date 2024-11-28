// https://codeforces.com/problemset/problem/300/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> neg, pos, zer;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x > 0)
            pos.push_back(x);
        else if (x < 0)
            neg.push_back(x);
        else
            zer.push_back(0);
    }

    if (pos.size() == 0)
    {
        // The product of two negatives makes one positive
        pos.push_back(neg.back());
        neg.pop_back();
        pos.push_back(neg.back());
        neg.pop_back();
    }

    cout << 1 << " " << neg.back() << endl;
    neg.pop_back();

    cout << pos.size();
    for (int i = 0; i < pos.size(); i++)
        cout << " " << pos[i];
    cout << endl;

    cout << zer.size() + neg.size();
    for (int i = 0; i < zer.size(); i++)
        cout << " " << zer[i];
    for (int i = 0; i < neg.size(); i++)
        cout << " " << neg[i];
    cout << endl;
}
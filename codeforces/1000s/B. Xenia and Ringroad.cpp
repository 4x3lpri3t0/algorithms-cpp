// https://codeforces.com/problemset/problem/339/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    
    int n, m;
    cin >> n >> m;

    vector<int> tasks(m);
    for (int i = 0; i < m; i++)
    {
        cin >> tasks[i];
    }

    long long time = 0;
    int current = 1;
    for (int i = 0; i < m; i++)
    {
        if (tasks[i] >= current)
        {
            time += tasks[i] - current;
        }
        else
        {
            time += n - current + tasks[i];
        }

        current = tasks[i];
    }

    cout << time;
}
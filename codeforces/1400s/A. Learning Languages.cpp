// https://codeforces.com/problemset/problem/277/A
// DISCLAIMER: This is NOT production-quality code.
#include <bits/stdc++.h>
using namespace std;

class DSU
{
    vector<int> parent, rank;

public:
    DSU(int n) : parent(n), rank(n, 0)
    {
        for (int i = 0; i < n; i++)
            parent[i] = i;
    }

    int find(int u)
    {
        if (u != parent[u])
            parent[u] = find(parent[u]); // Path compression
        return parent[u];
    }

    void unite(int u, int v)
    {
        u = find(u);
        v = find(v);
        if (u == v)
            return;

        if (rank[u] < rank[v])
            swap(u, v);

        parent[v] = u;

        if (rank[u] == rank[v])
            rank[u]++;
    }
};

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;

    DSU dsu(n + m + 1); // DSU for people and languages
    bool anyLanguage = false; // Flag to check if anyone knows any language
    for (int i = 1; i <= n; i++)
    {
        int k;
        cin >> k;
        if (k > 0)
            anyLanguage = true;
        for (int j = 0; j < k; j++)
        {
            int lang;
            cin >> lang;
            dsu.unite(i, n + lang); // Union: person w/ language
        }
    }

    // Count the number of connected components among people
    set<int> uniqueComponents;
    for (int i = 1; i <= n; i++)
        uniqueComponents.insert(dsu.find(i));

    int result = uniqueComponents.size() - 1; // - 1 because any component is isolated at the very beginning
    if (!anyLanguage)
        result = n; // If no one knows any language, everyone is isolated

    cout << result << endl;

}

// !!
// dsu
// dfs and similar
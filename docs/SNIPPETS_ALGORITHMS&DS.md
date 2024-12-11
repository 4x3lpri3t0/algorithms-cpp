# Algorithms & DS

## Bitmask Enumeration
```cpp
// Iterate over all subsets (0 to 2^n - 1)
for (int mask = 0; mask < (1 << n); mask++)
{
    for (int i = 0; i < n; i++) {
        // Check if ith element is included in the subset
        if (mask & (1 << i))
            // ...
    }
}
```

## DSU (Disjoint Set Union) / Union-Find
Used to determine connected components.
```cpp
class DSU
{
    vector<int> parent, rank;

public:
    DSU(int n)
    {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++)
        {
            parent[i] = i;
        }
    }

    int find(int u)
    {
        if (u != parent[u])
        {
            parent[u] = find(parent[u]); // Path compression
        }
        return parent[u];
    }

    void unite(int u, int v)
    {
        u = find(u);
        v = find(v);
        if (u != v)
        {
            if (rank[u] < rank[v])
            {
                swap(u, v);
            }
            parent[v] = u;
            if (rank[u] == rank[v])
            {
                rank[u]++;
            }
        }
    }
};
```

### Initialization
Create an instance of DSU with the number of elements.
```cpp
DSU dsu(n);
```

### Find operation
```cpp
int root = dsu.find(x);
```

### Union operation
```cpp
dsu.unite(x, y);
```

### Example
```cpp
int n = 5; // Number of elements
DSU dsu(n);

dsu.unite(0, 1);
dsu.unite(2, 3);

if (dsu.find(0) == dsu.find(1))
    cout << "0 and 1 are in the same set.\n";
if (dsu.find(0) != dsu.find(2))
    cout << "0 and 2 are in different sets.\n";
```

## DP (Dynamic Programming)

### 1D DP Array
Often used for problems like Fibonacci series, knapsack problems, etc.
```cpp
int dp[n + 1];
memset(dp, -1, sizeof(dp)); // Init to -1 (for problems with undefined states)
dp[0] = 0; // Base case
```

#### Example
Fibonacci Sequence
```cpp
int dp[n + 1];
dp[0] = 0;
dp[1] = 1;
for (int i = 2; i <= n; i++)
    dp[i] = dp[i - 1] + dp[i - 2];
```

### 2D DP Array
Used for more complex problems like longest common subsequence, 0/1 knapsack, etc.
```cpp
int dp[n + 1][m + 1];
memset(dp, 0, sizeof(dp)); // Init all elements to 0
```

#### Example
Longest Common Subsequence (LCS)
```cpp
int dp[m + 1][n + 1];
for (int i = 0; i <= m; i++)
{
    for (int j = 0; j <= n; j++)
    {
        if (i == 0 || j == 0)
            dp[i][j] = 0;
        else if (X[i - 1] == Y[j - 1])
            dp[i][j] = dp[i - 1][j - 1] + 1;
        else
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
    }
}
```

### Space Optimized DP
Optimize **SC** (Space Complexity) by only keeping relevant values.
```cpp
int prev[n + 1], curr[n + 1];
memset(prev, 0, sizeof(prev));
memset(curr, 0, sizeof(curr));

for (int i = 1; i <= m; i++)
{
    for (int j = 1; j <= n; j++)
        curr[j] = (X[i - 1] == Y[j - 1]) ? prev[j - 1] + 1 : max(prev[j], curr[j - 1]);

    memcpy(prev, curr, sizeof(curr));
}
```

### Bitmask DP
When states can be represented by subsets of items. E.g. TSP (Traveling Salesman Problem) for small input sizes.
```cpp
// dist[i][j] represents the distance between city i and city j
int dp[1 << n];  // DP array, size 2^n, stores minimum cost of visiting a set of cities
memset(dp, INF, sizeof(dp));
dp[0] = 0;  // Base case: no cities visited

for (int mask = 0; mask < (1 << n); mask++)
{
    for (int u = 0; u < n; u++)
    {
        if (mask & (1 << u))
        {
            for (int v = 0; v < n; v++)
            {
                if (!(mask & (1 << v)))
                    dp[mask | (1 << v)] = min(dp[mask | (1 << v)], dp[mask] + dist[u][v]);
            }
        }
    }
}
```

## Prefix Sum Array
Quickly compute the sum of elements in any subarray. Preprocess an array so the sum of elements from index 0 to index i is stored in an auxiliary array. Then you can retrieve subarray sums in constant time.
```cpp
// Compute prefix sums up to each index
int prefix[n + 1] = {0}; // prefix[i]: sum from arr[0] to arr[i-1]
for (int i = 1; i <= n; i++)
    prefix[i] = prefix[i - 1] + arr[i - 1];

// Sum of elements between index l and r (inclusive)
int sum_lr = prefix[r + 1] - prefix[l];
```

## Sliding Window
For problems requiring a fixed or dynamic window over a data stream (e.g. sums within a range).
```cpp
int sum = 0, l = 0;
for (int r = 0; r < n; r++)
{
    sum += arr[r]; // Expand the window
    while (sum > target)
        sum -= arr[l++]; // Shrink the window
    // Process the valid window
}
```
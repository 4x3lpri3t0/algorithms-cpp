# Competitive Programming Snippets

## Input/Output

### Fast input
[Source](https://www.geeksforgeeks.org/fast-io-for-competitive-programming/)
```cpp
ios::sync_with_stdio(0);
cin.tie(0);
// ...
```

### Redirect Input/Output Files
To redirect the standard input and output streams from your program into a file named `output.txt` (works for both `cout` and `printf`):
```cpp
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // ...
}
```
NOTE: Some Codeforces problems actually require `input.txt` & `output.txt`. In those cases the `#ifndef` preprocessor conditional directive should be removed.

## Test Case Loops

### Basic Loop
```cpp
int TC;
cin >> TC;
while (TC--)
    // ...
```

### Terminate on Input (Sentinel)
Useful for problems with indefinite input (e.g. until EOF or a specific value).
```cpp
while (true)
{
    int x;
    cin >> x;
    if (x == 0)
        break; // Sentinel value ends the loop
    // ...
}
```

## Input Reading

### Read Int Array
Snippet: `readintarr`
```cpp
int a[n];
for (int i = 0; i < n; i++)
    cin >> a[i];
```

### Read Vector of Pairs
```cpp
vector<pair<int, int>> v(n);
for (int i = 0; i < n; i++)
    cin >> v[i].first >> v[i].second;
```

### Read and Ignore Specific Words
For problems requiring selective input parsing.
<br>E.g. `A_Where_Are_My_Flakes.cpp`
```cpp
string _, t;
int k;
cin >> _ >> _ >> t >> _ >> k; // We're only interested in t and k
```

### Read Unknown Amount of Input
For problems where input size isn’t provided.
```cpp
vector<int> v;
int x;
while (cin >> x)
    v.push_back(x);
```

### Read Unknown Amount of Words
E.g. `11586_Train Tracks.cpp`
```cpp
string s;
getline(cin, s); // e.g. MM FF MF FM
int len = s.size();
for (int i = 0; i < len; i++)
    // ...
```

## Common Data Structures - Init

### Adjacency List (graph representation)
```cpp
typedef pair<int, int> ii;
typedef vector<ii> vii;
```

### Dynamic Programming
```cpp
int dp[n + 1];
memset(dp, -1, sizeof(dp));
dp[0] = 0;
```

### Array zeroes
```cpp
memset(a, 0, sizeof(a));
```

### Bool array
Set all elements `false`
```cpp
bool myBoolArray[ARRAY_SIZE] = { 0 };
```

### Matrix as Strings
Snippet: `readmatrix`
```cpp
int n, m;
cin >> n >> m;
vector<string> matrix(n);
for (int i = 0; i < n; i++)
    cin >> matrix[i];
```

## Type Conversion

### char to int
E.g. `A. Ultra-Fast Mathematician.cpp`
```cpp
int n = s[i] - '0';
```

### int to char
```cpp
charMatrix[i][j] = char(n);
```

### int as long
**DO NOT use this for production code**: Redefining `int` for the entire program can be very inefficient and potentially dangerous. This hack only makes sense in the context of Competitive Programming problems. Use `int64_t` instead.
```cpp
#define int long long
// Then can use `int32_t` for actual `int` values if needed.
```

## String Manipulation

### Process Each Character
```cpp
string s;
cin >> s;
for (char c : s)
    // ...
```

### Tokenize a String
Splitting a string into words based on delimiters.

### Example 1
```cpp
string s = "word1 word2 word3";
stringstream ss(s);
string word;
while (ss >> word)
    // ...
```

### Example 2
```cpp
string s = "word1,word2,word3";
stringstream ss(s);
string word;
while (getline(ss, word, ','))  // Use comma as delimiter
    // ...
```

### Get index of char in string
```cpp
int idx = str.find(c);
if (idx != string::npos)
    cout << "Found";
```

## Output Formatting

### Join vector
```cpp
void print_vector(vector<int> v)
{
    stringstream ss;
    for (int i = 0; i < v.size(); i++)
    {
        if (i != 0)
            ss << " ";
        ss << v[i];
    }
    cout << ss.str();
}
```

## Sorting

### Sort array
```cpp
sort(a, a + SIZE); // (sort up to the last element in the array)
```

### Sort vector/string ASC
```cpp
sort(v.begin(), v.end());
```

### Sort vector/string DESC
```cpp
sort(v.begin(), v.end(), greater<int>());
```

### Sort vector pairs
```cpp
sort(v.begin(), v.end(), [](pair<int, int> &a, pair<int, int> &b)
{
    return a.second < b.second; // based on 2nd element
});
```

## STL

### Array Sum
[GeeksForGeeks](https://www.geeksforgeeks.org/array-sum-in-cpp-stl/)
<br>E.g. `B. Roma and Changing Signs.cpp` 
```cpp
cout << accumulate(a, a + n, 0);
```

### Lower/Upper Bound
```cpp
auto it = lower_bound(a.begin(), a.end(), target); // First >= target
auto it = upper_bound(a.begin(), a.end(), target); // First > target
```

### Min/Max Element
E.g. `B. Pashmak and Flowers.cpp`
```cpp
int mn = *min_element(a, a + n);
int mx = *max_element(a, a + n);
```

### Permutations
E.g. `B. Shower Line.cpp`
```cpp
int line[N] = { ... };
do
{
    // ...
} while (next_permutation(line, line + N));
```
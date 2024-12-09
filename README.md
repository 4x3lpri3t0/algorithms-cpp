# Disclaimer

This repository serves as a personal space for experimentation and practice, and it is not representative of my professional coding standards. It primarily houses solutions to math problems, algorithms, and competitive programming exercises that I use to enhance my problem-solving capabilities.

In this context, I prioritize developer speed and efficiency over strict adherence to certain best practices, such as meaningful variable naming, function reusability, and code modularity. For instance, in competitive programming, it is common to use concise variable names like `TC` or `n` instead of more descriptive ones like `testCases` or `numberOfX`. These solutions are not intended to be production-ready; rather, they are part of my ongoing journey to hone my problem-solving skills. In actual professional software development, I recognize and adhere to industry-standard practices for maintaining clean, efficient, and maintainable code.

**Do NOT use `#using namespace std;` in production!** For small programs (especially in competitive programming) `#using namespace std;` can speed up development and improve readability by reducing verbosity. In these contexts, the chance of name conflicts is lower, and the benefits of quick syntax outweigh the costs.

**Do NOT use `#include <bits/stdc++.h>` in production!** This directive is an optimization meant solely for competitive programming contests, designed to save developer time at the expense of a negligible increase in compilation time. It includes ALL C++ STL libraries, which you most likely do NOT want. Additionally, it is specific to GCC and may not be available on other C++ compilers. In production environments, maintaining control over the libraries you include is crucial for clarity, performance, and maintainability.

The indiscriminate use of macros like `#define int long long` is also a poor practice that should not be applied in production.

# Competitive Programming Tricks/Hacks

## Input/Output

### Fast input
[Source](https://www.geeksforgeeks.org/fast-io-for-competitive-programming/)
```cpp
ios::sync_with_stdio(0);
cin.tie(0);
// ...
```

### Output to output.txt
To redirect the standard input and output streams from your program into a file named `output.txt` (works for both `cout` and `printf`):
```cpp
int main()
{
    std::streambuf *coutbuf = std::cout.rdbuf();    // Save old buffer
    char* tempFileName = "output.txt";
    std::ofstream out(tempFileName);
    std::cout.rdbuf(out.rdbuf());                   // Redirect std::cout to file
    freopen(tempFileName, "w", stdout);             // Redirect stdout to file

    // ...

    std::cout.rdbuf(coutbuf);                       // Restore the original buffer
    freopen("/dev/tty", "w", stdout);               // Restore stdout to the console
}
```

## Common Data Structures - Read

### Read TestCases until TC is 0
```cpp
int TC;
cin >> TC;
while (TC--)
    // ...
```

### Int array ('readintarr')
```cpp
int a[n];
for (int i = 0; i < n; i++)
	cin >> a[i];
```

### Int vector (pairs)
```cpp
vector<pair<int, int>> v(n);
for (int i = 0; i < n; i++)
    cin >> v[i].first >> v[i].second;
```

### String array (ignore some words)
E.g. `A_Where_Are_My_Flakes.cpp`
```cpp
string _, t;
int k;
cin >> _ >> _ >> t >> _ >> k; // We're only interested in t and k
```

### String array (unknown amount of words)
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

### Bool array (set all elements `false`)
```cpp
bool myBoolArray[ARRAY_SIZE] = { 0 };
```

### Matrix (alt snippet: "readmatrix")
```cpp
cin >> n >> m;
string row;
vector<string> a(n);
for (int i = 0; i < n; i++)
{
    cin >> row;
    a.push_back(row);
}
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
```cpp
// **DO NOT use this for production code**
#define int long long
// Then if you also need to use an actual int as part of the same exercise, use int32_t (e.g. `int32_t main()`)
```

## Misc

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

### Get index of char in string
```cpp
int idx = str.find(c);
if (idx != string::npos)
	cout << "Found";
```

## Sorting

### Sort array
```cpp
sort(a, a + SIZE); // (sort up to the last element in the array)
```

### Sort vector/string ASC
```cpp
sort(S.begin(), S.end());
```

### Sort vector/string DESC
```cpp
sort(S.begin(), S.end(), greater<int>());
```

## STL

### Max Element / Min Element
E.g. `B. Pashmak and Flowers.cpp`
```cpp
int mx = *max_element(a, a + n);
int mn = *min_element(a, a + n);
```

### Permutations
E.g. `B. Shower Line.cpp`
```cpp
int line[N] = { ... };
do {
    // ...
} while (next_permutation(line, line + N));
```
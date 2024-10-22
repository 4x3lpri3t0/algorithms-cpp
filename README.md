# algorithms-cpp

## Disclaimer

This repository serves as a personal space for experimentation and practice, and it is not representative of my professional coding standards. It primarily houses solutions to math problems, algorithms, and competitive programming exercises that I use to enhance my problem-solving capabilities.

In this context, I prioritize developer speed and efficiency over strict adherence to certain best practices, such as meaningful variable naming, function reusability, and code modularity. For instance, in competitive programming, it is common to use concise variable names like `TC` or `n` instead of more descriptive ones like `testCases` or `numberOfX`. These solutions are not intended to be production-ready; rather, they are part of my ongoing journey to hone my problem-solving skills. In actual professional software development, I recognize and adhere to industry-standard practices for maintaining clean, efficient, and maintainable code.

**Do NOT use `#include <bits/stdc++.h>` in production!** This directive is an optimization meant solely for competitive programming contests, designed to save developer time at the expense of a negligible increase in compilation time. It includes ALL C++ STL libraries, which you most likely do NOT want. Additionally, it is specific to GCC and may not be available on other C++ compilers. In production environments, maintaining control over the libraries you include is crucial for clarity, performance, and maintainability.

The use of `#define int long long` is also a poor practice that should not be applied in production.

## Competitive Programming Tricks

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

### Fast input hack
```cpp
// https://www.geeksforgeeks.org/fast-io-for-competitive-programming/
ios::sync_with_stdio(0);
cin.tie(0);
// (...)
```

### int as long hack
```cpp
// **DO NOT do this in production code**
#define int long long
// Then if you need to use an actual int, use int32_t (e.g. `int32_t main()`)
```

### Dynamic Programming
```cpp
int dp[n + 1];
memset(dp, -1, sizeof(dp));
dp[0] = 0;
```

### Adjacency List (graph representation)
```cpp
typedef pair<int, int> ii;
typedef vector<ii> vii;
```

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

### Init array zeroes
```cpp
memset(a, 0, sizeof(a));
```

### Init bool array (set all elements `false`)
```cpp
bool myBoolArray[ARRAY_SIZE] = { 0 };
```

### Read string array + ignore some words (e.g. A_Where_Are_My_Flakes.cpp)
```cpp
string _, t;
int k;
cin >> _ >> _ >> t >> _ >> k; // We're only interested in t and k
```

### Read string array with unknown amount of words (e.g. 11586_Train Tracks.cpp)
```cpp
int N;
scanf("%d", &N);
getchar();
while (N--)
{
    string s;
    getline(cin, s); // e.g. MM FF MF FM
    int len = s.size(); // Unknown length of string array
    for (int i = 0; i < len; i++)
    {
        // ...
    }
}
```

### Read TestCases until TC is 0
```cpp
int TC;
cin >> TC;
while (TC--)
{
    string S;
    cin >> S;
    // ...
}
```

### Read int array ('readintarr')
```cpp
int a[n];
for (int i = 0; i < n; i++)
{
	cin >> a[i];
}
```

### Get index of char in string
```cpp
int idx = str.find(c);
if (idx != string::npos)
	cout << "Found";
```

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
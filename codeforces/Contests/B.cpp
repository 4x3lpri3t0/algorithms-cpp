/*
TODO: TLE
*/

#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;
const int MAX_N = 100000;

int C[MAX_N + 1]; // We only need a 1D array to store the current row

// Function to compute C[n][k] using the wrong formula
void compute_binomial_wrong_formula(int n)
{
    C[0] = 1; // C[n][0] = 1
    if (n > 0)
    {
        C[n] = 1; // C[n][n] = 1
    }
    for (int k = 1; k < n; ++k)
    {
        C[k] = (C[k - 1] + C[k - 1]) % MOD; // Wrong formula: C[n][k] = C[n][k-1] + C[n-1][k-1]
    }
}

int main()
{
    int t;
    cin >> t;

    int max_n = 0;
    int n[t], k[t];

    for (int i = 0; i < t; ++i)
    {
        cin >> n[i];
        if (n[i] > max_n)
        {
            max_n = n[i]; // Find the maximum n needed for precomputation
        }
    }

    for (int i = 0; i < t; ++i)
    {
        cin >> k[i];
    }

    // Process each query
    for (int i = 0; i < t; ++i)
    {
        compute_binomial_wrong_formula(n[i]);
        cout << C[k[i]] << "\n"; // Output the value for C[n][k]
    }

    return 0;
}

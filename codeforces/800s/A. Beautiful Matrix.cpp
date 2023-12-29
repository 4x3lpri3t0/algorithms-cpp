// https://codeforces.com/problemset/problem/263/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    
    int matrix[5][5];
    int row, col;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0 ; j < 5; j++)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1)
            {
                row = i;
                col = j;
            }
        }
    }

    cout << abs(row - 2) + abs(col - 2);
}
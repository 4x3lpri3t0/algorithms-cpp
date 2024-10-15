// https://onlinejudge.org/external/114/11498.pdf
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int TC, N, M, x, y;
    cin >> TC;
    while (TC != 0)
    {
        cin >> N;
        cin >> M;

        while (TC-- > 0)
        {
            cin >> x;
            cin >> y;

            if (x == N || y == M)
                cout << "divisa\n";
            else if (x > N && y > M)
                cout << "NE\n";
            else if (x < N && y > M)
                cout << "NO\n";
            else if (x < N && y < M)
                cout << "SO\n";
            else
                cout << "SE\n";
        }

        cin >> TC;
    }
}
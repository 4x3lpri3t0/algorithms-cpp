#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    int sum;

    while (scanf("%lld", &x))
    {
        if (x == 0)
            break;

        while (x / 10 != 0)
        {
            sum = 0;
            while (x != 0)
            {
                sum += x % 10;
                x /= 10;
            }
            x = sum;
        }
        printf("%lld\n", x);
    }
}
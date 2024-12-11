// https://onlinejudge.org/external/4/484.pdf
#include <bits/stdc++.h>
using namespace std;

vector<int> order;
map<int, int> freq;
int main()
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        if (!freq.count(n))
        {
            freq[n] = 1;
            order.push_back(n);
        }
        else
        {
            freq[n]++;
        }
    }

    for (int i = 0; i < order.size(); i++)
    {
        printf("%d %d\n", order[i], freq[order[i]]);
    }

    return 0;
}
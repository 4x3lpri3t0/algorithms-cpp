// https://onlinejudge.org/external/12/1203.pdf
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[20];
    int qnum, p, n; // Query id, Period, Number of results to show
    priority_queue<
        pair<int, pair<int, int>>,
        vector<pair<int, pair<int, int>>>,
        greater<pair<int, pair<int, int>>>>
        pq;

    while (scanf("%s", s), strcmp("#", s))
    {
        scanf("%d %d", &qnum, &p);
        pq.push(pair<int, pair<int, int>>(p, pair<int, int>(qnum, p)));
    }

    scanf("%d", &n);
    while (n--)
    {
        pair<int, pair<int, int>> pr = pq.top();
        pq.pop();

        printf("%d\n", pr.second.first);

        pr.first += pr.second.second;
        pq.push(pr);
    }

    return 0;
}
// https://onlinejudge.org/external/4/417.pdf
#include <iostream>
#include <unordered_map>
using namespace std;

/*
NOTE: This alternative solution involves precomputing all 'valid' words and caching them.
The tradeoff is obviously memory in favor of computational speed (as usually caching goes).
*/

unordered_map<string, int> map;
char aux[5];

void process(int level, char start, int limit)
{
    for (int i = start + 1; i <= 'z'; i++)
    {
        aux[level] = i;
        if (level == limit)
            map.insert(make_pair(string(aux), map.size() + 1)); // Whole word built -> add to map
        else
            process(level + 1, i, limit);
    }
}

int main()
{
    for (int i = 0; i <= 4; i++)
    {
        aux[i] = 0;
        process(0, 'a' - 1, i);
    }

    string w;
    while (cin >> w)
    {
        if (map.count(w))
            printf("%d\n", map[w]);
        else
            printf("0\n");
    }

    return 0;
}
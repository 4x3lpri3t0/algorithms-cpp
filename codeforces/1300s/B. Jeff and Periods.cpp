// https://codeforces.com/problemset/problem/352/B
#include<stdio.h>
#include<stdlib.h>
#define size 100005
main()
{
    int n, totalValid = 0, k = 0, temp;
    scanf("%d", &n);
    int lastPos[size],  // last saw index position
        ok[size],       // is valid x?
        distance[size]; // keep track of previous distance (same x, previous arithmetic progression instance)
    for (int i = 0; i < size; i++)
    {
        ok[i] = -1;
        distance[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        if (distance[temp] == -1)
        {
            // First occurrence
            distance[temp] = 0;
            ok[temp] = 1;
        }
        else if (distance[temp] == 0)
            // Second occurrence
            distance[temp] = i - lastPos[temp];
        else if (distance[temp] != (i - lastPos[temp]))
            // N occurrence and doesn't match pervious one
            ok[temp] = -1;

        lastPos[temp] = i;
    }

    for (int i = 0; i < size; i++)
        if (ok[i] != -1) // Count total valid occurrences
            totalValid++;

    printf("%d\n", totalValid);
    for (int i = 0; i < size; i++)
        if (ok[i] != -1) // Print only valid occurrences
            printf("%d %d\n", i, distance[i]);
}

// implementation
// arithmetic progression
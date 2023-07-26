// https://onlinejudge.org/external/104/10424.pdf
#include <bits/stdc++.h>
using namespace std;

int calculateLoveValue(char *name)
{
    int total(0), temp;

    // Map letters to values and sum them up
    while (*name)
    {
        if (*name >= 'a' && *name <= 'z')
            total += *name - 96; // [a, z] to [1, 26]
        else if (*name >= 'A' && *name <= 'Z')
            total += *name - 64; // [A, Z] to [1, 26]
        ++name;
    }

    // Reduce to one digit
    while (total >= 10)
    {
        temp = 0;
        while (total)
        {
            temp += total % 10;
            total /= 10;
        }
        total = temp;
    }

    return total;
}

int main()
{
    char nameOne[30], nameTwo[30];
    int first, second;

    while (gets(nameOne))
    {
        gets(nameTwo);
        first = calculateLoveValue(nameOne);
        second = calculateLoveValue(nameTwo);

        if (first < second)
            printf("%.2f %%\n", first * 100.0 / second);

        else
            printf("%.2f %%\n", second * 100.0 / first);
    }
}
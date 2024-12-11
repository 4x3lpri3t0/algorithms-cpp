// https://onlinejudge.org/external/2/272.pdf
#include <bits/stdc++.h>
using namespace std;

main()
{
    char line[1024];
    bool open = true;
    while (gets(line))
    {
        int len = strlen(line);

        for (int i = 0; i < len; i++)
        {
            if (line[i] == '"')
            {
                if (open)
                    printf("``");
                else
                    printf("''");

                open = !open;
            }
            else
                printf("%c", line[i]);
        }

        printf("\n");
    }
}
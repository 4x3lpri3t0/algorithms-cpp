#include <cstdio>

using namespace std;

int main()
{
    char command[10];
    int round = 1;

    scanf("%s", command);

    while (command[0] != '*')
    {
        printf("Case %d: ", round++);

        if (command[0] == 'H')
            printf("Hajj-e-Akbar\n");
        else
            printf("Hajj-e-Asghar\n");

        scanf("%s", command);
    }
}
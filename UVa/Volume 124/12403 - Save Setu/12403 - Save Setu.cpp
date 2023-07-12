#include <cstdio>

using namespace std;

int main()
{
    int T, K, sum = 0;
    scanf("%d", &T);
    while (T--)
    {
        char command[10];
        scanf("%s", command);

        if (command[0] == 'd')
        {
            scanf("%d", &K);
            sum += K;
        }
        else
            printf("%d\n", sum);
    }
}
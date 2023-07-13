#include <cstdio>

using namespace std;

int main()
{
    int T, farmers, farmSize, animals, envFriend;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &farmers);
        int sum = 0;
        while (farmers--)
        {
            scanf("%d %d %d", &farmSize, &animals, &envFriend);

            sum += (farmSize * envFriend);
        }

        printf("%d\n", sum);
    }
}
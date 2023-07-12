#include <cstdio>

using namespace std;

int main()
{
    int cnt = 1, TC;
    int L, W, H;

    scanf("%d", &TC);
    while (TC--)
    {
        scanf("%d %d %d", &L, &W, &H);

        printf("Case %d: ", cnt++);
        if (L <= 20 && W <= 20 && H <= 20)
            printf("good\n");
        else
            printf("bad\n");
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, B, H, W, hotelCostPerNight, bedsAvailable;
    while (scanf("%d %d %d %d\n", &N, &B, &H, &W) != EOF)
    {
        int minCost = B + 1;
        for (int i = 0; i < H; i++)
        {
            cin >> hotelCostPerNight;

            for (int j = 0; j < W; j++)
            {
                cin >> bedsAvailable;
                if (bedsAvailable >= N && N * hotelCostPerNight < minCost)
                {
                    minCost = N * hotelCostPerNight;
                }
            }
        }

        if (minCost <= B)
            printf("%d\n", minCost);
        else
            printf("%s\n", "stay home");
    }
}
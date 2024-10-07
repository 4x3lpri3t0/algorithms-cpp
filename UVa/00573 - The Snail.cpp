// https://onlinejudge.org/external/5/573.pdf
#include <bits/stdc++.h>

using namespace std;

int main()
{

    /*
    H is the height of the well
    U is the distance the snail can climb each day
    D is the distance slid during the night
    F is the fatigue factor
    */
    int H, U, D, F;
    cin >> H >> U >> D >> F;

    while (H != 0)
    {
        // Multiply all numbers by 100 so that doubles never have to be used
        H *= 100;
        U *= 100;
        D *= 100;

        // Calculate the base fatigue distance
        F = U / 100 * F;

        int climbed = 0; // Distance climbed
        int day = 0;
        while (climbed <= H && climbed >= 0)
        {
            climbed += max(U - day * F, 0);
            day++;
            if (climbed > H)
                break;
            climbed -= D;
        }
        if (climbed > H)
            cout << "success on day " << day;
        else
            cout << "failure on day " << day;
        cout << endl;

        // Next round...
        cin >> H >> U >> D >> F;
    }
}
// https://onlinejudge.org/external/6/661.pdf
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    /*
    n is the number of devices
    m is the number of operations
    c is the capacity of the fuse (in Amperes)
    */
    int n, m, c;
    cin >> n >> m >> c;
    int sequenceCounter = 1;

    while (n != 0 && m != 0 && c != 0)
    {
        int deviceConsumption[n];
        for (size_t i = 0; i < n; i++)
        {
            // Consumption of each device
            int consumption;
            cin >> consumption;
            deviceConsumption[i] = consumption;
        }

        bool devicesOn[n] = {0};
        int totalCurrentEnergy = 0;
        int maxTotalEnergy = 0;
        for (size_t i = 0; i < m; i++)
        {
            int deviceIndex;
            cin >> deviceIndex;
            deviceIndex--;
            if (!devicesOn[deviceIndex])
            {
                // Was OFF, turn ON
                devicesOn[deviceIndex] = true;
                totalCurrentEnergy += deviceConsumption[deviceIndex];
            }
            else
            {
                // Was ON, turn OFF
                devicesOn[deviceIndex] = false;
                totalCurrentEnergy -= deviceConsumption[deviceIndex];
            }

            maxTotalEnergy = max(maxTotalEnergy, totalCurrentEnergy);
        }

        cout << "Sequence " << sequenceCounter << endl;
        if (maxTotalEnergy > c)
            cout << "Fuse was blown." << endl;
        else
        {
            cout << "Fuse was not blown." << endl;
            cout << "Maximal power consumption was " << maxTotalEnergy << " amperes." << endl;
        }
        cout << endl;
        ++sequenceCounter;

        // Read next sequence input:
        cin >> n >> m >> c;
    }
}
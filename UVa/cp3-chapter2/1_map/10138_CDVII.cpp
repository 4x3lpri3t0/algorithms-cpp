// https://onlinejudge.org/external/101/10138.pdf
#include <bits/stdc++.h>
using namespace std;

/*
Every month - a bill includes:
+ each km travelled (at a rate determined by the time of day)
+ 1 dollar per trip
+ 2 dollar account charge

Prepare the bill for one month, given a set of license plate photos.
*/

const int BASE_CHARGE_CENTS = 200;

struct Record
{
    int month, day, hour, mins, location;
    bool isExit;
    int getTime()
    {
        return mins + hour * 60 + day * 24 * 60; // Total minutes
    }
};

main()
{
    int TC;
    scanf("%d\n\n", &TC);
    string input;
    while (TC--)
    {
        // Input
        int fares[24] = {};
        for (int i = 0; i < 24; i++)
            scanf("%d", fares + i);

        cin.ignore();

        map<string, vector<Record>> licenseToRecords;
        while (getline(cin, input), !input.empty())
        {
            istringstream iss(input);
            string plate, command;
            Record record;
            char _; // Character to ignore
            iss >> plate >> record.month >> _ >> record.day >> _ >> record.hour >> _ >> record.mins >> command >> record.location;
            record.isExit = command == "exit";
            licenseToRecords[plate].push_back(record);
        }

        // Compute + Output
        for (auto &licenseRecords : licenseToRecords)
        {
            string license = licenseRecords.first;
            vector<Record> records = licenseRecords.second;

            sort(records.begin(), records.end(), [](Record a, Record b)
                 { return a.getTime() < b.getTime(); });

            int totalCents = BASE_CHARGE_CENTS;
            for (int i = 0; i < records.size(); i++)
            {
                // Add to cost if it's a consecutive match
                if (!records[i].isExit && i + 1 < records.size() && records[i + 1].isExit)
                {
                    int distance = abs(records[i].location - records[i + 1].location);
                    totalCents += distance * fares[records[i].hour];
                    totalCents += 100;
                }
            }

            // Output (only if there were additional charges)
            if (totalCents > BASE_CHARGE_CENTS)
                cout << license << " $" << setprecision(2) << fixed << totalCents / 100.0 << endl;
        }

        if (TC) // Extra newline if more test cases remain
            cout << endl;
    }
}
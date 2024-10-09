// https://onlinejudge.org/external/3/394.pdf
#include <bits/stdc++.h>
using namespace std;

class Array
{
public:
    int base;
    int size;
    string name;
    int dimension;
    int C0; // Adjusted BASE address (accounts for the lower bounds of each dimension)
    vector<int> C; // Contiguous physical addresses
    vector<int> upperBound;
    vector<int> lowerBound;

    void readData()
    {
        cin >> name >> base >> size >> dimension;

        C = vector<int>(dimension);
        lowerBound = vector<int>(dimension);
        upperBound = vector<int>(dimension);

        for (int i = 0; i < dimension; ++i)
            cin >> lowerBound[i] >> upperBound[i];

        C[dimension - 1] = size;

        C0 = base - C[dimension - 1] * lowerBound[dimension - 1];
        for (int i = dimension - 2; i > -1; --i)
        {
            C[i] = C[i + 1] * (upperBound[i + 1] - lowerBound[i + 1] + 1);
            C0 -= (C[i] * lowerBound[i]);
        }
        
        return;
    }
};

main()
{
    int arrays;
    int references;
    map<string, int> indexes;
    cin >> arrays >> references;
    vector<Array> definedArrays(arrays);

    // Input
    for (int i = 0; i < arrays; ++i)
    {
        Array current;
        current.readData();
        indexes[current.name] = i;
        definedArrays[i] = current;
    }

    // Output
    for (int i = 0; i < references; ++i)
    {
        string name;
        cin >> name;

        int index = indexes[name];
        int address = definedArrays[index].C0;
        int dimension = definedArrays[index].dimension;

        cout << name << "[";
        for (int j = 0; j < dimension; ++j)
        {
            int id;
            cin >> id;
            address += (definedArrays[index].C[j] * id);

            cout << id;
            if (j + 1 < dimension)
                cout << ", ";
            else
                cout << "] = ";
        }
        cout << address << "\n";
    }
}
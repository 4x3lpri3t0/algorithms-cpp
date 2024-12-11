#include <bits/stdc++.h>
using namespace std;

class Algorithm
{
public:
    struct DataEntry
    {
        char name[32];
        int value;
        DataEntry *next_entry; // nullptr denotes end of list
    };

    /** @return Pointer to first entry in list sorted alphabetically by name, and where names are identical, by value (smallest first) */
    static DataEntry *sortListByName(DataEntry *input)
    {
        // Sort input by name and then value
        DataEntry *newList = new DataEntry();

        // For each entry in input, insert it into the new list in the correct position
        while (input != nullptr)
        {
            DataEntry *newEntry = new DataEntry();
            newEntry->value = input->value;
            strcpy(newEntry->name, input->name);

            // Find the correct position to insert the new entry
            DataEntry *prev = nullptr;
            DataEntry *curr = newList;
            while (curr != nullptr)
            {
                if (strcmp(curr->name, newEntry->name) > 0)
                {
                    break;
                }
                else if (strcmp(curr->name, newEntry->name) == 0)
                {
                    if (curr->value < newEntry->value)
                    {
                        break;
                    }
                }
                prev = curr;
                curr = curr->next_entry;
            }

            // Insert the new entry into the new list
            if (prev == nullptr)
            {
                newEntry->next_entry = newList;
                newList = newEntry;
            }
            else
            {
                newEntry->next_entry = curr;
                prev->next_entry = newEntry;
            }

            input = input->next_entry;
        }

        return newList->next_entry;
    }
};

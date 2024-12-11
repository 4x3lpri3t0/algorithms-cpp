#include <iostream>

using namespace std;

class Answer
{
public:
    static int count(int n)
    {
        return n * (n - 1) / 2;
    }
};
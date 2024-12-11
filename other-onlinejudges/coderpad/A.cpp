#include <iostream>
#include <vector>

using std::cout;
using std::vector;

class Algorithm
{
private:
    /** @return true if the given number is prime, false otherwise */
    static bool isPrime(int n)
    {
        if (n <= 1)
        {
            return false;
        }
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }

public:
    /** @return the sum of all primes in the range [first, last] inclusive */
    static int sumPrimes(int first, int last)
    {
        long long sum = 0;
        for (int i = first; i <= last; i++)
        {
            if (isPrime(i))
            {
                sum += i;
            }
        }
        return sum;
    }
};

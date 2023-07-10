#include <iostream>

using namespace std;

int main()
{
    int T;
    std::cin >> T;

    int n;
    while (T--)
    {
        int n;
        std::cin >> n;

        int min(100), max(0), temp;
        while (n--)
        {
            int x;
            std::cin >> x;
            max = std::max(max, x);
            min = std::min(min, x);
        }

        std::cout << 2 * (max - min) << '\n';
    }
}
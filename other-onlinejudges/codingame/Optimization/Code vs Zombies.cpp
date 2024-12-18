// https://www.codingame.com/ide/puzzle/code-vs-zombies
#include <bits/stdc++.h>
using namespace std;

struct Human
{
    Human(int id_, int x_, int y_) : id(id_), x(x_), y(y_) {}

    int id, x, y;
};

struct Zombie
{
    Zombie(int id_, int x_, int y_, int nextX_, int nextY_) : id(id_), x(x_), y(y_), nextX(nextX_), nextY(nextY_) {}

    int id, x, y, nextX, nextY;
};

int dist(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main()
{
    // Game loop
    while (1) {
        vector<Human> humans;
        vector<Zombie> zombies;
        int playerX, playerY, humanCount;
        cin >> playerX >> playerY >> humanCount;
        for (int i = 0; i < humanCount; i++)
        {
            int humanId, humanX, humanY;
            cin >> humanId >> humanX >> humanY;
            humans.emplace_back(humanId, humanX, humanY);
        }
        int zombieCount;
        cin >> zombieCount;
        for (int i = 0; i < zombieCount; i++)
        {
            int zombieId, zombieX, zombieY, zombieXNext, zombieYNext;
            cin >> zombieId >> zombieX >> zombieY >> zombieXNext >> zombieYNext;
            zombies.emplace_back(zombieId, zombieX, zombieY, zombieXNext, zombieYNext);
        }

        // Find human in greatest danger
        pair<int, int> target;
        int minDist = numeric_limits<int>::max();
        for (auto& human : humans)
        {
            Zombie* closestZombie;
            int closestZombieDist = numeric_limits<int>::max();
            for (auto& zombie : zombies)
            {
                int zombieDist = dist(human.x, human.y, zombie.x, zombie.y);
                if (closestZombieDist > zombieDist)
                {
                    closestZombieDist = zombieDist;
                    closestZombie = &zombie;
                }
            }

            if (closestZombieDist < minDist)
            {
                int distance = dist(playerX, playerY, human.x, human.y);
                if (closestZombieDist / 400.0 >= (max(distance - 2000, 0)) / 1000.0)
                {
                    target = { closestZombie->x, closestZombie->y };
                    minDist = closestZombieDist;
                }
            }
        }

        // Check if player is the closest to ALL zombies
        bool playerClosestToAllZombies = true;
        for (auto& zombie : zombies)
        {
            for (auto& human : humans)
            {
                if (dist(human.x, human.y, zombie.x, zombie.y) < dist(playerX, playerY, zombie.x, zombie.y))
                {
                    playerClosestToAllZombies = false;
                    break;
                }
            }

            if (!playerClosestToAllZombies)
                break;
        }

        // When we are closest to all zombies, move to their center
        if (playerClosestToAllZombies)
        {
            double centerX = 0, centerY = 0;
            for (auto& zombie : zombies)
            {
                centerX += zombie.x;
                centerY += zombie.y;
            }
            centerX /= zombies.size();
            centerY /= zombies.size();

            target = { centerX, centerY };
        }

        cout << target.first << " " << target.second << endl;
    }
}
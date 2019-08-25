#include <bits/stdc++.h>

int main() {
    int testCases = 0, numberOfWalls = 0;
    std::cin >> testCases;

    for (int i = 1; i <= testCases; ++i) {
        std::cin >> numberOfWalls;
        int arr[numberOfWalls];
        int currentWall = 0, highJump = 0, lowJump = 0;

        for (int j = 0; j < numberOfWalls; ++j) {
            std::cin >> currentWall;
            arr[j] = currentWall;

            if (j == 0) continue;
            if (arr[j] > arr[j - 1]) ++highJump;
            if (arr[j] < arr[j - 1]) ++lowJump;
        }

        std::cout << "Case " << i << ": " << highJump << " " << lowJump << std::endl;
    }

    return 0;
}
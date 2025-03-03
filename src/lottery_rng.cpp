#include <iostream>
#include <random>
#include <unordered_set>

// Function to generate unique random lottery numbers
std::unordered_set<int> generateLotteryNumbers(int min, int max, int count) {
    std::unordered_set<int> lotteryNumbers;
    std::random_device rd;
    std::mt19937 gen(rd()); // Mersenne Twister RNG
    std::uniform_int_distribution<int> dist(min, max);

    while (lotteryNumbers.size() < count) {
        lotteryNumbers.insert(dist(gen));
    }
    return lotteryNumbers;
}

int main() {
    int min = 1, max = 50, numCount = 6; // Example: Choose 6 numbers between 1 and 50
    std::unordered_set<int> lotteryNumbers = generateLotteryNumbers(min, max, numCount);

    std::cout << "🎰 Lottery Draw Results: ";
    for (int num : lotteryNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

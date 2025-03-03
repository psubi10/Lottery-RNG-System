#include <iostream>
#include <random>
#include <vector>
#include <map>
#include <unordered_set>
#include <iomanip>

// Lottery settings
const int MIN_NUM = 1;
const int MAX_NUM = 50;
const int NUM_COUNT = 6;
const int SIMULATIONS = 10000;

// Function to generate unique lottery numbers efficiently
std::vector<int> generateLotteryNumbers() {
    std::unordered_set<int> numbers;
    std::vector<int> result;
    result.reserve(NUM_COUNT);

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(MIN_NUM, MAX_NUM);

    while (numbers.size() < NUM_COUNT) {
        int num = dist(gen);
        if (numbers.insert(num).second) { // Insert and check if unique
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    std::map<int, int> frequency; // Track occurrences of each number

    // Initialize frequency map
    for (int i = MIN_NUM; i <= MAX_NUM; i++) {
        frequency[i] = 0;
    }

    // Run Monte Carlo simulations
    for (int i = 0; i < SIMULATIONS; i++) {
        std::vector<int> draw = generateLotteryNumbers();
        for (int num : draw) {
            frequency[num]++;
        }
    }

    // Display results with formatted output
    std::cout << "\n🎲 Lottery Number Frequency Distribution (" << SIMULATIONS << " simulations):\n";
    std::cout << "---------------------------------------------------\n";
    std::cout << " Number | Frequency | Percentage (%) \n";
    std::cout << "---------------------------------------------------\n";
    
    for (const auto& pair : frequency) {
        double percentage = (pair.second * 100.0) / (SIMULATIONS * NUM_COUNT);
        std::cout << std::setw(4) << pair.first << "     | " 
                  << std::setw(8) << pair.second << "   | " 
                  << std::fixed << std::setprecision(2) << percentage << " %\n";
    }

    return 0;
}

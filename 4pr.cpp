/*#include <iostream>
#include <vector>
#include <unordered_map>

std::unordered_map<int, int> countMultiples(const std::vector<int>& input) {
    std::unordered_map<int, int> result;
    
    // Initialize result map with keys 1 to 9 and values 0
    for (int i = 1; i <= 9; ++i) {
        result[i] = 0;
    }

    // Count multiples
    for (int num : input) {
        for (int i = 1; i <= 9; ++i) {
            if (num % i == 0) {
                result[i]++;
            }
        }
    }
    
    return result;
}

int main() {
    std::vector<int> input = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};
    std::unordered_map<int, int> output = countMultiples(input);

    // Print the result
    std::cout << "{ ";
    for (const auto& pair : output) {
        std::cout << pair.first << ": " << pair.second << ", ";
    }
    std::cout << "}" << std::endl;

    return 0;
}*/
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};
    int n = 11;
    int count[10] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= 9; j++) {
            if (arr[i] % j == 0) {
                count[j]++;
            }
        }
    }

    for (int i = 1; i <= 9; i++) {
        cout << i << ": " << count[i] << endl;
    }

    return 0;
}
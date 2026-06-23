#include "twoSum.hpp"
#include <iostream>
#include <vector>
#include <string_view>

struct TestCase {
    std::string_view name;
    std::vector<int> nums;
    int target;
    std::vector<int> expected;
};

int main() {
    const TestCase cases[] = {
        {"Basic pair", {2, 7, 11, 15}, 9, {0, 1}},
        {"Mid-array pair", {3, 2, 4}, 6, {1, 2}},
        {"Negative values", {-1, -2, -3, 5}, 2, {2, 3}},
        {"Zero pair", {0, 0, 3, 4}, 0, {0, 1}},
        {"Minimum size", {1, 2}, 3, {0, 1}},
        {"Duplicate values", {3, 3, 4, 2}, 6, {0, 1}},
    };

    bool allPassed = true;
    for (const auto& test : cases) {
        const auto result = twosum::twoSum(test.nums, test.target);
        if (result != test.expected) {
            std::cerr << "Test failed: " << test.name << "\n"
                      << "  Input: target=" << test.target << ", nums=[";
            for (size_t index = 0; index < test.nums.size(); ++index) {
                std::cerr << test.nums[index];
                if (index + 1 < test.nums.size()) {
                    std::cerr << ", ";
                }
            }
            std::cerr << "]\n"
                      << "  Expected: [" << test.expected[0] << ", " << test.expected[1] << "]\n"
                      << "  Actual: [" << result[0] << ", " << result[1] << "]\n";
            allPassed = false;
        }
    }

    if (!allPassed) {
        std::cerr << "One or more tests failed.\n";
        return EXIT_FAILURE;
    }

    std::cout << "All tests passed.\n";
    return EXIT_SUCCESS;
}

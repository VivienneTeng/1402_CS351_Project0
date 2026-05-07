#include <iostream>
#include <vector>

using namespace std;

// Declaration of twoSum function
vector<int> twoSum(vector<int>& nums, int target);

int main() {
    // Example usage of twoSum
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
        cout << "Numbers: " << nums[result[0]] << ", " << nums[result[1]] << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
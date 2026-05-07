#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSumArray(vector<int>& nums, int target);
vector<int> twoSumHash(vector<int>& nums, int target);

void printResult(const string& label, const vector<int>& result, const vector<int>& nums) {
    cout << label;
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << " | ";
        cout << "Numbers: " << nums[result[0]] << ", " << nums[result[1]] << endl;
    } else {
        cout << "No solution found." << endl;
    }
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> resultArray = twoSumArray(nums, target);
    vector<int> resultHash = twoSumHash(nums, target);

    printResult("Array solution: ", resultArray, nums);
    printResult("Hash solution:  ", resultHash, nums);

    return 0;
}

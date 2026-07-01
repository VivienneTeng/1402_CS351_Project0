#include "twoSum.hpp"

#include <stdexcept>
#include <unordered_map>

namespace twosum {

std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> indexByValue;
    indexByValue.reserve(nums.size());

    for (int index = 0; index < static_cast<int>(nums.size()); ++index) {
        const int value = nums[index];
        const int complement = target - value;

        const auto found = indexByValue.find(complement);
        if (found != indexByValue.end()) {
            return {found->second, index};
        }

        indexByValue[value] = index;
    }

    throw std::runtime_error("No valid two-sum pair found");
}

} // namespace twosum

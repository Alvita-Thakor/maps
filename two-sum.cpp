#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> p;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (p.find(complement) != p.end()) {
                return {p[complement], i}; 
            }
            p[nums[i]] = i; 
        }
        return {};
    }
};

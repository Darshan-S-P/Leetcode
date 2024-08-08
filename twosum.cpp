class Solution {
public:
    vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> num_map; // to store the number and its index
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (num_map.find(complement) != num_map.end()) {
                return {num_map[complement], i}; // found the solution
            }
            num_map[nums[i]] = i; // store index of the current number
        }
        return {};
    }
};

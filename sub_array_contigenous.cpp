#include <vector>
#include <algorithm> 
using namespace std;

class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        if (nums.empty()) return 0; // handle empty

        int current_max = nums[0];
        int max_so_far = nums[0];
        
        for(int i = 1; i < nums.size(); i++) {
            current_max = max(nums[i], nums[i] + current_max);
            max_so_far = max(current_max, max_so_far);
        }
        
        return max_so_far;
    }
};

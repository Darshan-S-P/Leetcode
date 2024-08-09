class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt = 0;   // Initialize cnt to 0
        int n = nums.size();
        
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[i - 1]) {
                cnt++;
            }
        }
        if (nums[n - 1] > nums[0]) {
            cnt++;
        }
        
        return cnt <= 1;
    }
};

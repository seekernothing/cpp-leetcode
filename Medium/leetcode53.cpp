// Maxium Subarray Problem

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currentSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            // Update the current sum: either include the current element or start a new subarray
            currentSum = max(nums[i], currentSum + nums[i]);
            // Update the maximum sum encountered so far
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};

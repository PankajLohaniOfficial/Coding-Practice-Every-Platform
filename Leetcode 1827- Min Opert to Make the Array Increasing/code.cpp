class Solution {
public:
    int minOperations(vector<int>& nums) {
        int result = 0;  // Variable to store the total number of operations
        for (int i = 1; i < nums.size(); i++) {  // Start iterating from index 1
            if (nums[i] <= nums[i - 1]) {  // If the current number is less than or equal to the previous one
                int temp = nums[i - 1] - nums[i] + 1;  // Calculate how much we need to increment nums[i]
                result += temp;  // Add this increment to the total result
                nums[i] += temp;  // Apply the increment to nums[i]
            }
        }
        return result;  // Return the total number of operations
    }
};

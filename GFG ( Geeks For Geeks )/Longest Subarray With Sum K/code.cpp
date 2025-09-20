class Solution
{
public:
    int longestSubarray(vector<int> &arr, int k)
    {
        int long_length = 0; // Variable to keep track of the longest subarray length
        int n = arr.size();  // Size of the array

        // Outer loop to consider all starting points for subarrays
        for (int i = 0; i < n; i++)
        {
            int sum = 0; // Variable to store the sum of the current subarray

            // Inner loop to consider all possible end points for subarrays starting at i
            for (int j = i; j < n; j++)
            {
                sum += arr[j]; // Add the current element to the sum

                // If the sum of the subarray is equal to k, update the longest length
                if (sum == k)
                {
                    long_length = max(long_length, j - i + 1); // Update the maximum length
                }
            }
        }

        return long_length; // Return the longest length found
    }
};

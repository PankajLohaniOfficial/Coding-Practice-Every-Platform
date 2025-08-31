// XOR Optimal Solutuon Approach

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int XOR1 = 0, XOR2 = 0;

        for (int i = 0; i < n; i++)
        {
            XOR1 ^= (i + 1); // xor doing with the numbers from 1 to n
            XOR2 ^= nums[i]; // doing xor 2 with the array elements given to us..
        }

        return XOR1 ^ XOR2; // this will provide me the missing number from the array
    }
};

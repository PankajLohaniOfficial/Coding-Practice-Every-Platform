class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int N = nums.size();
        vector<int> hash(N + 1, 0); // ham log nya aaray bna rhe hai hash aur usme sare elements 0 initialize kar rhe hai...

        for (int i = 0; i < N; i++)
        {
            hash[nums[i]] = 1;
        }

        for (int i = 0; i <= N; i++)
        {
            if (hash[i] == 0)
            {
                return i;
            }
        }

        return -1;
    }
};

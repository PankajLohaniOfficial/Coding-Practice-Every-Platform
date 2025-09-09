class Solution
{
public:
    bool isNoZero(int num)
    { // yh hamare number ko check karne liy kam ayga ki woh 0 hai ya nhi .
        while (num > 0)
        {
            if (num % 10 == 0)
                return false;
            num /= 10;
        }
        return true;
    }

    vector<int> getNoZeroIntegers(int n)
    {
        for (int a = 1; a < n; a++)
        {
            int b = n - a;
            if (isNoZero(a) && isNoZero(b))
            {
                return {a, b};
            }
        }
        return {}; // yeh tab ke liy hai jab hame kch soln nhi milega par aisa nhi hoga.
    }
};

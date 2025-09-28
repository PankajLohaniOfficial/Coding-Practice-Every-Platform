class Solution
{
public:
    // Function to compute the decimal/base-10 representation of an integer 'n'
    vector<int> decimalRepresentation(int n)
    {
        vector<int> arr;     // This will store the base-10 components
        long long place = 1; // 'place' represents the current digit's place value (1, 10, 100, etc.)

        // Loop through each digit of the number from right to left
        while (n > 0)
        {
            int digit = n % 10; // Extract the last digit of 'n'

            // If the digit is not zero, compute its base-10 value and store it
            if (digit != 0)
            {
                arr.push_back(digit * place); // e.g., if digit=3 and place=10, store 30
            }

            n /= 10;     // Remove the last digit from 'n'
            place *= 10; // Move to the next digit's place (10x)
        }

        // Sort the result in descending order as required
        sort(arr.rbegin(), arr.rend());

        return arr; // Return the list of base-10 components
    }
};

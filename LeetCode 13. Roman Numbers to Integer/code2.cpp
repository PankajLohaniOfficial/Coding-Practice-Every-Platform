class Solution
{
public:
    int romanToInt(string s)
    {
        // Map to store the Roman numeral values
        unordered_map<char, int> roman_values = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int total = 0;

        // Traverse through the string and calculate the total value
        for (int i = 0; i < s.length() - 1; ++i)
        {
            // If current Roman value is less than the next one, subtract the current value
            if (roman_values[s[i]] < roman_values[s[i + 1]])
            {
                total -= roman_values[s[i]];
            }
            // Otherwise, add the current Roman value
            else
            {
                total += roman_values[s[i]];
            }
        }

        // Add the value of the last character
        total += roman_values[s[s.length() - 1]];

        return total;
    }
}
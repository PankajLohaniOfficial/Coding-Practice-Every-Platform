class Solution
{
public:
    int smallestAbsent(vector<int> &nums)
    {
        int sum = 0;         // To store the sum of all elements in the array
        int n = nums.size(); // Store the number of elements in the array

        // Calculate the sum of all numbers in the array
        for (int i = 0; i < n; i++)
        {
            sum = sum + nums[i];
        }

        // Calculate the average as a floating-point value
        // static_cast is used to ensure floating-point division
        double avg = static_cast<double>(sum) / n;

        // Start checking from the smallest integer greater than the average
        // We use int(avg) + 1 to ensure the result is strictly greater than avg
        int candidate = static_cast<int>(avg) + 1;

        // Loop indefinitely until we find the correct missing number
        while (true)
        {
            bool found = false; // Flag to check if candidate is found in the array

            // Search for candidate in the array
            for (int i = 0; i < n; i++)
            {
                if (nums[i] == candidate)
                {
                    found = true; // Candidate exists in the array
                    break;        // No need to check further
                }
            }

            // If candidate is not found in the array and is positive, it's the answer
            if (!found && candidate > 0)
            {
                return candidate; // Return the smallest absent positive integer > avg
            }

            // Move to the next integer and try again
            candidate++;
        }
    }
};

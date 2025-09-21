class Solution
{
public:
    // Function to find the earliest finish time among all tasks
    int earliestTime(vector<vector<int>> &tasks)
    {
        // Initialize variable to store the earliest finish time as the maximum possible integer value
        int earliest_finish_time = INT_MAX;

        // Iterate through each task in the tasks vector
        for (int i = 0; i < tasks.size(); i++)
        {
            // Get the start time of the current task (tasks[i][0])
            int start_time = tasks[i][0];

            // Get the duration of the current task (tasks[i][1])
            int duration = tasks[i][1];

            // Calculate the finish time of the current task
            int finish_time = start_time + duration;

            // If the current task finishes earlier than the previously recorded earliest finish time,
            // update the earliest_finish_time
            if (finish_time < earliest_finish_time)
            {
                earliest_finish_time = finish_time;
            }
        }

        // Return the earliest finish time found among all tasks
        return earliest_finish_time;
    }
};

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;

        // First window
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        int maxSum = sum;

        // Sliding window
        for (int i = k; i < nums.size(); i++) {
            sum += nums[i];
            sum -= nums[i - k];

            maxSum = max(maxSum, sum);
        }

        return (double)maxSum / k;
    }
};

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;

        for(int x : nums) {
            sum += x;
        }

        // Total sum odd hai
        if(sum % 2 != 0)
            return false;

        int target = sum / 2;

        vector<bool> dp(target + 1, false);

        // 0 sum possible hai
        dp[0] = true;

        for(int x : nums) {

            // Reverse loop because each element can be used only once
            for(int j = target; j >= x; j--) {

                dp[j] = dp[j] || dp[j - x];
            }
        }

        return dp[target];
    }
};
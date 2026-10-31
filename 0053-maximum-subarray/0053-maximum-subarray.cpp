class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //not sliding window approach kyukii isme negative number and window size 
        //fixed nhii hai
        //kdanes algorithm
        int maxi=nums[0];
        int curr=nums[0];
        for(int i=1;i<nums.size();i++){
            curr=max(nums[i],curr+nums[i]);
            maxi=max(maxi,curr);

        }
        return maxi;
    }
};
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int prev=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                prev=max(prev,count);
              

            }
            else {
                count=0;
               

            }

        }
        return prev;
    }
};
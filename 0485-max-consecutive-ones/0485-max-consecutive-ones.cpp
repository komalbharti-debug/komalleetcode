class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int p=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                p=max(p,count);
              

            }
            else {
                count=0;
               

            }

        }
        return p;
    }
};
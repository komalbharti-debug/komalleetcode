class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        int pos=1;
        for(int i=1;i<nums.size();i++){
           if(nums[i]!=nums[i-1]){
               // continue;
                nums[pos]=nums[i];
                count++;
                pos++;

            }
        }
        return pos;

    }
};
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        int pos=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
            count++;
            nums[pos]=nums[i];
            pos++;}

        }
        return count;
    }
};
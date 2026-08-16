class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2) return nums.size();
        
        int pos=2;

     for(int i=2;i<nums.size();i++){
        if(nums[pos-2]!=nums[i]){
              nums[pos]=nums[i];
              pos++;
            //  count++;               

        }
     }
     return pos;
    }
};
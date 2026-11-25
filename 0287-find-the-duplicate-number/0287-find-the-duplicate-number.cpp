class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i =0;i<nums.size();i++){
            int num=nums[i];
            if(mp.find(num)!=mp.end()){
                return num;
            }
             mp[num] = 1; 
        }
        return -1;
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       //approach 1 using hash map 
       // approach using moores voting algorithm with s.c:O(1)
       unordered_map<int,int>freq;
       int n=nums.size();
       for(int x:nums){
        freq[x]++;
       }
       for(int i=0;i<n;i++){
        if(freq[nums[i]]>n/2){
            return nums[i];
        }

       }
       return 0;
    }
};
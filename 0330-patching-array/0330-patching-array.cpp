class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        //miss like example 3 by adding element 
        //patch is like
        long long miss=1;
        int patches=0;
        int i=0;
        while(miss<=n){
            if(i<nums.size() && nums[i]<=miss){
            miss+=nums[i];
            i++;
            }
        
        else{
            patches++;
            miss+=miss;
        }
        }
        return patches;

    }
};
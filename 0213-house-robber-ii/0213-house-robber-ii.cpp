class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp1(n);
        vector<int>dp2(n);
        if(n==0) return 0;
        if(n==1) return nums[0];
        if(n == 2)
    return max(nums[0], nums[1]);
       dp1[0]=nums[0];
       dp1[1]=max(nums[0],nums[1]);
        
        for(int i=2;i<=n-2;i++){
            dp1[i]=max(nums[i]+dp1[i-2],dp1[i-1]);
          

        }
       int case1= dp1[n-2];
        dp2[1]=nums[1];
       dp2[2]=max(nums[1],nums[2]);
        
        for(int i=3;i<=n-1;i++){
            dp2[i]=max(nums[i]+dp2[i-2],dp2[i-1]);
           
        }
       int case2= dp2[n-1];
        return max(case1, case2);

    }
};
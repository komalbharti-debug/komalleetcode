class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MIN;
        int p=1;
        for(int x:nums){
            p*=x;
            ans=max(ans,p);
            if(p==0)
            p=1;
        }
        p=1;
        for(int i=n-1;i>0;i--){
            p*=nums[i];
            ans=max(ans,p);
            if(p==0)
            p=1;

        }
        return ans;
    }
};
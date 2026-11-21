class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int l=0;
        int r=0;
        int m=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
            
            
            l++;
            
            else if(nums[i]==1)
                
                r++;
            
            else
                m++;
            

        }
       int i=0;
       while(l--){
        nums[i]=0;
        i++;


       }
       while(r--){
        nums[i]=1;
        i++;

       }
       while(m--){
        nums[i]=2;
        i++;
       }
        
    }
};
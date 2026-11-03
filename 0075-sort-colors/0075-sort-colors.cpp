class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;

        // Step 1: Count frequencies
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0)
                count0++;
            else if(nums[i] == 1)
                count1++;
            else
                count2++;
        }

        // Step 2: Fill zeros
        int i = 0;

        while(count0--) {
            nums[i] = 0;
            i++;
        }

        // Step 3: Fill ones
        while(count1--) {
            nums[i] = 1;
            i++;
        }

        // Step 4: Fill twos
        while(count2--) {
            nums[i] = 2;
            i++;
        }
    }
};
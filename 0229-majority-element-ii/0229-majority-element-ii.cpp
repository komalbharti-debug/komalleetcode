class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       //using mooyres boore
      int candidate1=0,candidate2=0;
      int count1=0,count2=0;
      for(int num:nums){
        if(num==candidate1){//num==candidate ho jaye yani 2==2 
            count1++;
        }
        else if(num==candidate2){
            count2++;

        }
        //candidate 1 seat vacant
        else if(count1==0){// yeah phele case jab candidate =0 count=0 yeah count
        //0 ho jaye
            candidate1=num;
            count1=1;
        }
        else if(count2==0){
            candidate2=num;
            count2=1;
        }
        else{
            //teebo alg h
            count1--;
            count2--;
        }


      }

      // second pass verify
      count1=0;
      count2=0;
      for(int num:nums){
        if(num==candidate1)
        count1++;
        else if(num==candidate2)
        count2++;

      }
       vector<int> ans;

        if(count1 > nums.size()/3)
            ans.push_back(candidate1);

        if(count2 > nums.size()/3)
            ans.push_back(candidate2);

        return ans;



    }
};
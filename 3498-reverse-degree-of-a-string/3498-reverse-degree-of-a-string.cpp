class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            int reverse_value=26- (c-'a');
            int position=i+1;
            sum+=reverse_value*position;

        }
        return sum;
    }
};
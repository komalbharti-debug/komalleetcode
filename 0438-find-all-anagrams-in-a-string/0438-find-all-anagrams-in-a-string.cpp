class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
      vector<int>ans;
      int k=p.length();//to store p length
      vector<int> pFreq(26,0);
      vector<int> windowFreq(26,0);
      for(char ch:p){
        pFreq[ch-'a']++;
      }  

      for(int i=0;i<s.length();i++){
        windowFreq[s[i]-'a']++;

      
      if(i>=k){
        windowFreq[s[i-k]-'a']--;

      }
      if(i>=k-1 && pFreq==windowFreq){
        ans.push_back(i-k+1);
      }


      }
      return ans;
    }
};
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string str) {
      int left =0;
      int right=str.length()-1;
      while(left<right){
      while(left<right&&!isalnum(str[left])) left++;
      while(left<right&&!isalnum(str[right])) right--;
      if(tolower(str[left])!=tolower(str[right]))
      return false;
      left++;
      right--;
      }
      return true;
    } 
};


    

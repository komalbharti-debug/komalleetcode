// LeetCode 434 C++ Code

class Solution {
public:
    int countSegments(string s) {
        int count = 0, n = s.length();
        for (int i = 0; i < n; i++) {
            if (s[i] == ' ' && i != 0 && s[i - 1] != ' ')
                count++;
        }
        if (n > 0 && s[n - 1] != ' ')
            count++;
        return count;
    }
};
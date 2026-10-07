class Solution {
public:

    vector<string> ans;

    void solve(string s, int start, int leftRemove, int rightRemove) {

        // Agar saare required removals ho gaye
        if (leftRemove == 0 && rightRemove == 0) {

            int balance = 0;

            // Check whether string is valid
            for (char ch : s) {

                if (ch == '(') {
                    balance++;
                }
                else if (ch == ')') {
                    balance--;
                }

                // ')' '(' se zyada ho gaya
                if (balance < 0) {
                    return;
                }
            }

            // Agar end mein bhi extra '(' nahi hai
            if (balance == 0) {
                ans.push_back(s);
            }

            return;
        }

        // Har position par try karo
        for (int i = start; i < s.size(); i++) {

            // Duplicate brackets skip karo
            if (i > start && s[i] == s[i - 1]) {
                continue;
            }

            // '(' remove karna
            if (leftRemove > 0 && s[i] == '(') {

                string temp = s.substr(0, i) + s.substr(i + 1);

                solve(temp, i, leftRemove - 1, rightRemove);
            }

            // ')' remove karna
            if (rightRemove > 0 && s[i] == ')') {

                string temp = s.substr(0, i) + s.substr(i + 1);

                solve(temp, i, leftRemove, rightRemove - 1);
            }
        }
    }


    vector<string> removeInvalidParentheses(string s) {

        int leftRemove = 0;
        int rightRemove = 0;

        // Find minimum number of removals
        for (char ch : s) {

            if (ch == '(') {
                leftRemove++;
            }

            else if (ch == ')') {

                if (leftRemove > 0) {
                    leftRemove--;
                }
                else {
                    rightRemove++;
                }
            }
        }

        solve(s, 0, leftRemove, rightRemove);

        return ans;
    }
};
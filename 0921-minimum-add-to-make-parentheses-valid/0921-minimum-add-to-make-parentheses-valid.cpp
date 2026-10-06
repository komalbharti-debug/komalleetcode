class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int c =0;
        for(char i: s){
            if(i=='('){
                st.push(i);
            }
            else {
                if(st.empty()){
                    c++;
                } else {
                    st.pop();
                }
            }
        }
        return c + st.size();

    }
};
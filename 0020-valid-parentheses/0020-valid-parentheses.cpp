class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char k : s){
            if(k=='(' || k== '{' || k=='['){
                st.push(k);
            }
            else{
                if(st.empty()){
                    return false;
                }
                if ((k == ')' && st.top() != '(') ||(k == ']' && st.top() != '[') ||(k == '}' && st.top() != '{')) {
                    return false;}
                    st.pop();
            }

            }
            return st.empty();
            
        }
};
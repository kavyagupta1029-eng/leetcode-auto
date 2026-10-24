class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        int left =0;
        unordered_set<char>c;
        for(int right = 0 ; right<s.size();right++){
           while(c.find(s[right]) != c.end()){
            c.erase(s[left]);
            left++;
           } 
           c.insert(s[right]);
           ans= max( ans, right-left +1);
        }
        return ans;
    }
};
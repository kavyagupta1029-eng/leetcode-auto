class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>c;
        int ans =0;
        int left =0;
        int maxfreq =0;
        for(int right =0; right<s.size();right++){
            c[s[right]]++;
            maxfreq =max(maxfreq,c[s[right]]);
            while(right-left+1 - maxfreq  >k){
                c[s[left]]--;
                left++;
            }
           ans = max(ans ,right-left+1);
        }
        return ans;
    }
};
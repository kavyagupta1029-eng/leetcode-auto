class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int ans=0;
        for(int nums :st ){
            if(st.find(nums -1) == st.end()){
                int cur = nums;
                int len = 1;
                while(st.find(cur +1)!= st.end()){
                    cur++;
                    len++;
                }
                ans = max(ans, len);
            }
        }
        return ans;
    }
};
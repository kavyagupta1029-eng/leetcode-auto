class Solution {
public:
    void allsubset(vector<int>&nums, vector<int>&ans,int i,vector<vector<int>>&allS){
        if(i==nums.size()){
            allS.push_back ({ans});
            return;
        }
        ans.push_back(nums[i]);
        allsubset(nums,ans,i+1,allS);
        ans.pop_back();
        allsubset(nums,ans,i+1,allS);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>allS;
        vector<int>ans;
        allsubset(nums,ans,0,allS);

        return allS;
    }
};
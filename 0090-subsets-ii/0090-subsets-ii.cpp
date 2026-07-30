class Solution {
public:
    void unqsubst(vector<int>&nums,vector<int>&ans,int i,vector<vector<int>>&alls){
        if(i==nums.size()){
            alls.push_back({ans});
            return;
        }
        //include
        ans.push_back(nums[i]);
        unqsubst(nums,ans,i+1,alls);

        ans.pop_back();

        int idx=i+1;
        while(idx<nums.size()&& nums[idx]==nums[idx-1]){ idx++;
        }
        //xclude
        unqsubst(nums,ans,idx,alls);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       vector<vector<int>> alls;
       sort(nums.begin(),nums.end());
       vector<int> ans;
       unqsubst(nums,ans,0,alls);

        return alls;
    }
};
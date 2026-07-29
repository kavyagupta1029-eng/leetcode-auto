class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
     int n= nums.size();
        int count =0;
        vector<int>prefixs(n,0);
        prefixs[0]= nums[0];
        for(int i=1; i<n;i++){
            prefixs[i]=prefixs[i-1]+nums[i];
        }
        unordered_map<int,int>m;
        for(int j=0;j<n;j++){
            if(prefixs[j] == k)count++;
            int val = prefixs[j]-k;
            if(m.find(val)!= m.end()){
                count+= m[val];
            }
            if(m.find(prefixs[j] )==m.end()){
                m[prefixs[j]]=0;
            }
            m[prefixs[j]]++;
        }
        return count;
    }
};
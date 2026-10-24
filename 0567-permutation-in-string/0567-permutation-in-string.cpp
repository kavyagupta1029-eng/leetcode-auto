class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>per;
        if(s1.size()>s2.size()){
            return false;
        }
        for(int i=0;i<s1.size();i++){
            per[s1[i]]++;
        }
        for (int i=0;i<=s2.size()-s1.size();i++){
            int k=0;
            unordered_map<char,int>frq;
            for(int j=i;j<i+s1.size();j++){
                frq[s2[j]]++;
            }
            if(per==frq){
                return true;
            }
        }
        return false;
    }
};
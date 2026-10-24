class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string>seen;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char num = board[i][j];
                if(num == '.'){
                    continue;
                }
                string row = to_string(i)+num;
                string col = to_string(j)+num;
                string box = to_string(i/3)+to_string(j/3)+num;
                if(seen.count("r"+row)|| seen.count("c"+col)|| seen.count("b"+box)){
                    return false;
                }
                seen.insert("r"+row);
                seen.insert("c"+col);
                seen.insert("b"+box);
            }
        }
        return true;
    }
};
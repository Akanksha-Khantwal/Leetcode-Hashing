class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    unordered_set<string>seen;
      for(int r=0;r<9;r++){
        for(int c=0;c<9;c++){
            char num=board[r][c];
            if (num=='.')continue;
            string rowkey="row"+to_string(r)+num;
            string colkey="col"+to_string(c)+num;
            string boxkey="box"+to_string((r/3)*3 +(c/3))+num;

            if(seen.count(rowkey)|| seen.count(colkey)|| seen.count(boxkey))
            return false;
            seen.insert(rowkey);
            seen.insert(colkey);
            seen.insert(boxkey);

        }
      }
      return true;       
       
    }
};

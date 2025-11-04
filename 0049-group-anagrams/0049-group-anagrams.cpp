class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>>mpp;
       for(auto str:strs){
        string key=str;
        sort(key.begin(),key.end());
        mpp[key].push_back(str);

       }
       vector<vector<string>>result;
       for(auto &it:mpp){
        result.push_back(it.second);
       }
       return result;
    }
};
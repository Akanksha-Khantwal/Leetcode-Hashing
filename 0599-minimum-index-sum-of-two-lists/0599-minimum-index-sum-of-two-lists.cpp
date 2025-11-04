class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<  string,int>mpp;
        vector<string>result;
        for(int i=0;i<list1.size();i++){
            mpp[list1[i]]=i;
        }
        int minSum=INT_MAX;
        int sum;
        for(int j=0;j<list2.size();j++){
            if(mpp.count(list2[j])){
                sum =mpp[list2[j]]+j;
              
            }
            if(sum<minSum){
                minSum=sum;
                result.clear();
                result.push_back(list2[j]);
            }
            else if(sum==minSum){
                result.push_back(list2[j]);
            }
        }
        return result;
    }
};
#include <bits/stdc++.h>
using namespace std;

class RandomizedSet {
public:
    vector<int> nums;               
    unordered_map<int, int> mp;     
    bool insert(int val) {
     if(mp.find(val)!= mp.end())return false;
     nums.push_back(val);
     mp[val]=nums.size()-1;
     return true;
    }

    bool remove(int val) {
        if(mp.find(val)==mp.end())return false;
        int last=nums.back();
        int ind=mp[val];
        nums[ind]=last;
        mp[last]=ind;
        nums.pop_back();
        mp.erase(val);
        return true;


    }

    int getRandom() {
        int randIndex = rand() % nums.size(); 
        return nums[randIndex];
    }
};

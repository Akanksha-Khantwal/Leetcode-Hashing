class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>item;
        int count;
        for(char c :jewels){
            item.insert(c);

        }
        for(char i :stones){
            if(item.count(i)){
                count++;
            }
        }
        return count;
    }
};
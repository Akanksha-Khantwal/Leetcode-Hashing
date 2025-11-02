class MyHashSet {
    static const int size=1000;
    vector<list<int>>bucket;

    int hash(int key){
        return  key%size;
    }
public:
    MyHashSet() {
        bucket.resize(size);
        
    }
    
    void add(int key) {
        int index=hash(key);
        for(int val :bucket[index]){
            if(val==key)
            return;
        }
        bucket[index].push_back(key);
        
    }
    
    void remove(int key) {
        int index=hash(key);
        bucket[index].remove(key);
        
    }
    
    bool contains(int key) {
        int index=hash(key);
        for(int val: bucket[index]){
            if(val==key)
            return true;
        }
        return false;
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
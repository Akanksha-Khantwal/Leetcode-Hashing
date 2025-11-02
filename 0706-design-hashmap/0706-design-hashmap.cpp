template< typename U,typename V>
class Pair{
    public:
    U first;
    V second;

    Pair(U f,V s){
        first=f;
        second=s;
    }
};
class Bucket{
    list<Pair<int ,int>>list;
    public:
    
    void put(int key ,int value){
        for( auto &p: list){
            if(p.first==key){
                p.second=value;
                return;
            }
        }
        list.push_front(Pair<int,int>(key,value));
    }
    int get(int key){
        for(auto &p: list){
            if(p.first==key){
                return p.second;
            }
        }
        return -1;
    }
    void remove(int key){
        for(auto it=list.begin();it!=list.end();it++){
            if(it->first==key){
                list.erase(it);
                return;
            }
        }
    }
};
class MyHashMap {
    public:
    int keyrange;
    vector<Bucket>bucket;
    MyHashMap(){
    keyrange=769;
    bucket =vector<Bucket>(keyrange);
    } 
    int getbucketindex(int key){
        return  key%keyrange;
    }
    
    void put(int key, int value) {
        int bucketindex=getbucketindex(key);
        bucket[bucketindex].put(key,value);
        
    }
    
    int get(int key) {
        int bucketindex=getbucketindex(key);
        return bucket[bucketindex].get(key);
        
    }
    
    void remove(int key) {
        int bucketindex=getbucketindex(key);
        bucket[bucketindex].remove(key);
        
        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
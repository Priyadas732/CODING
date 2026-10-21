class LRUCache {
public:
    int n;
    list<int>dl;
    map<int,pair<list<int>::iterator, int>>mp; // key->{address, value}

    void makeRecentlyUsed(int key){
        dl.erase(mp[key].first);
        dl.push_back(key);
        mp[key].first = prev(dl.end());
    }
    LRUCache(int capacity) {
        n = capacity;
    }
    
    int get(int key) {
        if(mp.find(key) != mp.end()){
            makeRecentlyUsed(key);
            return mp[key].second;
        }
        else return -1;
    }
    
    void put(int key, int value) {
        if(mp.find(key) != mp.end()){
            mp[key].second = value;
            makeRecentlyUsed(key);
        }else{
            dl.push_back(key);
            mp[key] = {prev(dl.end()), value};
            n--;
        }
        if(n<0){
            int key_delete = dl.front();
            mp.erase(key_delete);

            dl.pop_front();
            n++;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
class MyHashSet {
public:
    bool v1[10000000]={false};
    MyHashSet() {
    }
    
    void add(int key) {
        if(!v1[key]) v1[key]=true;
    }
    
    void remove(int key) {
        if(v1[key]) v1[key]=false;
    }
    
    bool contains(int key) {
        if(v1[key]) return true;
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
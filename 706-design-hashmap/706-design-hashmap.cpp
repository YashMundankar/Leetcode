class MyHashMap {
public:
    int v1[1000001];
    MyHashMap() {
        fill(v1, v1 + 1000000, -1);

    }
    
    void put(int key, int value) {
        v1[key]=value;
    }
    
    int get(int key) {
        return v1[key];
    }
    
    void remove(int key) {
        v1[key]=-1;
        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
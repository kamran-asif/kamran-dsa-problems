#include <vector>
#include <list>

class MyHashSet {
public:
    MyHashSet() {
        table.resize(SIZE);
    }
    
    void add(int key) {
        int index = key % SIZE;
        for (int val : table[index]) {
            if (val == key) return;
        }
        table[index].push_back(key);
    }
    
    void remove(int key) {
        int index = key % SIZE;
        table[index].remove(key);
    }
    
    bool contains(int key) {
        int index = key % SIZE;
        for (int val : table[index]) {
            if (val == key) return true;
        }
        return false;
    }

private:
    static const int SIZE = 10000;
    std::vector<std::list<int>> table;
};

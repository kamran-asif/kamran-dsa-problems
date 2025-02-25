#include <vector>
#include <list>

class MyHashMap {
public:
    MyHashMap() {
        table.resize(SIZE);
    }
    
    void put(int key, int value) {
        int index = key % SIZE;
        for (auto& pair : table[index]) {
            if (pair.first == key) {
                pair.second = value;
                return;
            }
        }
        table[index].push_back({key, value});
    }
    
    int get(int key) {
        int index = key % SIZE;
        for (auto& pair : table[index]) {
            if (pair.first == key) return pair.second;
        }
        return -1;
    }
    
    void remove(int key) {
        int index = key % SIZE;
        table[index].remove_if([key](const std::pair<int, int>& pair) {
            return pair.first == key;
        });
    }

private:
    static const int SIZE = 10000;
    std::vector<std::list<std::pair<int, int>>> table;
};

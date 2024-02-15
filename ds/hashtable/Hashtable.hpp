#include <vector>
#include <utility> // For pair
#include <list>

// insert, get, delete, contains, size
// loadfactor, rehash

// use overloading to handle hash functions
//  also need to select between hashing strategies...
template <typename K, typename V>
class Hashtable{

    private:
    std::vector<std::list<std::pair<K, V>>> hashtable(10);
    int size;
    double loadfactor();
    void rehash();

    public:
    Hashtable();
    void insert(K key, V value);
    V getVal(K key);
    void deleteVal(K key);
    bool contains(K key);
    int size();
    double loadfactor();
};

#include "Hashtable.tpp"
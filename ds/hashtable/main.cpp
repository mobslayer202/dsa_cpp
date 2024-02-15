//#include <typeinfo>
#include <type_traits> // Faster than typeid()
#include <iostream>

template <typename K, typename V>
class MyHashTable {
public:
    MyHashTable() {
        if (std::is_same<K, int>::value){
            std::cout << "int" << std::endl;
        } else if (std::is_same<K, double>::value){
            std::cout << "double" << std::endl;
        } else if (std::is_same<K, std::string>::value){
            std::cout << "string" << std::endl;
        } else {
            std::cout << "none of above" << std::endl;
        }
    }
};

int main() {
    MyHashTable<int, std::string> hashtable;
    MyHashTable<double, std::string> hashtable1;
    MyHashTable<std::string, std::string> hashtable2;
    MyHashTable<char, std::string> hashtable3;
    return 0;
}
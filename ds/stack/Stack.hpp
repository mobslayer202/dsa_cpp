#include <vector>

// Push
// Pop
// Peek
// isEmpty
// size

template <typename T>
class Stack{
    private:
        std::vector<T> stack;
        int size = 0;
    public:
        void push(T element);
        void pop();
        T peek();
        bool isEmpty();
        int getSize();
};

#include "Stack.tpp"
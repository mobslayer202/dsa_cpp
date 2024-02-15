#include <iostream>

#include "Stack.hpp"

int main(){
    Stack<int> s;

    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);

    while (!s.isEmpty()) {
        std::cout << s.peek() << "\n";
        s.pop();
    }
    std::cout << std::endl;
}
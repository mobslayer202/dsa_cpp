template <typename T>
void Stack<T>::push(T element){
    stack.push_back(element);
    size++;
}
template <typename T>
void Stack<T>::pop(){
    stack.pop_back();
    size--;
}

template <typename T>
T Stack<T>::peek(){
    return stack.at(size-1);
}

template <typename T>
bool Stack<T>::isEmpty(){
    return size == 0;
}

template <typename T>
int Stack<T>::getSize(){
    return size;
}
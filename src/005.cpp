#include"005.h"
// 不用类模板下--定义栈元素的数据类型
// typedef string DataType;    

// 构造函数实现
template<class DataType>    // 类外实现必须要加这句
Stack<DataType>::Stack(int size) : stacksize(size), top(0) {
    items = new DataType[stacksize];
}

// 析构函数实现
template<class DataType>
Stack<DataType>::~Stack() {
    delete[] items;
    items = nullptr;
}

// 判断栈是否为空实现
template<class DataType>
bool Stack<DataType>::isempty() const {
    return top == 0;
}

// 判断栈是否已满实现
template<class DataType>
bool Stack<DataType>::isfull() const {
    return top == stacksize;
}

// 元素入栈实现
template<class DataType>
bool Stack<DataType>::push(const DataType& item) {
    if (top < stacksize) {
        items[top++] = item;
        return true;
    }
    return false;
}

// 元素出栈实现
template<class DataType>
bool Stack<DataType>::pop(DataType& item) {
    if (top > 0) {
        item = items[--top];
        return true;
    }
    return false;
}

void test005(){
    // 创建栈对象 大小是 5
    Stack<string> s(5);     // 存放string类型数据 

    // 元素入栈
    s.push("h"); s.push("e"); s.push("l"); s.push("l"); s.push("o");

    // 元素出栈
    string item;
    while (s.isempty()==0){s.pop(item); cout<<"item = "<<item<<endl;}
}
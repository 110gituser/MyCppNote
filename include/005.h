#pragma once
#include<iostream>
using namespace std;
#include <string>  // 如果 DataType 可能是 std::string，需要包含这个头文件

template<class DataType>
class Stack {
private:
    DataType* items;    // 栈数组
    int stacksize;      // 栈实际的大小
    int top;            // 栈顶指针

public:
    // 构造函数：1）分配栈数组内存；2）把栈顶指针初始化为0
    Stack(int size);

    // 析构函数：释放动态分配的数组内存
    ~Stack();

    // 判断栈是否为空
    bool isempty() const;   // const必须加上

    // 判断栈是否已满
    bool isfull() const;

    // 元素入栈
    bool push(const DataType& item);

    // 元素出栈
    bool pop(DataType& item);
};

void test005();
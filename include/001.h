#pragma once    // 避免重复定义
#include<iostream>
using namespace std;

class Stu{  // student 
public:
    // 1）可以为类的成员函数创建模板，但不能是虚函数和析构函数
    template<typename T>
    Stu(T a);
    // 不能是虚函数
    template<typename T>
    void show(T b);
};

// 2) 函数模板支持多个通用数据类型的参数
template<typename T1,typename T2>
void showThrNum(T1 a,T2 b,int c);

// 3) 函数模板支持重载，可以有非通用数据类型的参数
template<typename T1,typename T2>
void showThrNum(T1 a,T2 b,char c);

void test001();
#pragma once
#include<iostream>
using namespace std;

// 模板类（或函数）的定义和实现必须放在头文件中，不能分离到 .cpp 文件中
// 固定数组
template<class T,int len = 10>
class Array{
private:
    T items[len];   // 数组元素
public:
    Array(){}       // 默认构造函数
    ~Array(){}      // 析构函数
    T& operator[](int i){return items[i];}// 重载操作符[] 可以修改数组中的元素
    const T& operator[](int i)const{return items[i];}// 重载操作符[] 不能修改数组中的元素
};

// 可变数组
template<class T>
class Vector{
private:
    int len;   // 数组元素的个数
    T* items;  // 数组元素
public:
    // 默认构造函数，分配内存
    Vector(int size = 10):len(size){items = new T[len];}       
    ~Vector(){delete[] items; items = nullptr;}

    void resize(int size){      // 扩展数组的内存
        if (size<=len)return;   // 只能往更大扩展
        T* tmp = new T[size];   // 分配更大的内存空间
        for(int i = 0; i<len;i++)tmp[i]=items[i];// 把原来数组中的元素复制到新数组
        delete[] items;     // 释放原来的数组
        items = tmp;        // 让数组指针指向新数组
        len = size;         // 扩展后的数组长度
    }

    int size()const{return len;}    // 获取数组长度
    T& operator[](int i){           // 重载操作符 可以修改数组中的元素
        if(i>=len)resize(i+1);      // 扩展数组
        return items[i];
    }

    const T& operator[](int i)const{return items[i];}// 重载操作符 不能修改数组中的元素
};
void test006();
#pragma once
#include<iostream>
using namespace std;

class Stu{
public:
    int m_age = 0;      // 初始化学生年龄
    int m_rank = 0;     // 初始化学生排名
};

// 交换两个变量的值(普通函数模板)
template<typename T> 
void Swap(T&a,T&b);

// 交换两个Stu对象的排名(具体化函数模板)
template<> 
void Swap<Stu>(Stu&s1,Stu&s2);

void test002();
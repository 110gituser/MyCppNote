#pragma once
#include<iostream>
// 使用 typeid 运算符（需要 <typeinfo> 头文件）
#include <typeinfo>
using namespace std;

template<typename T1,typename T2>
auto add(T1 a ,T2 b)->decltype(a+b);

void test003();
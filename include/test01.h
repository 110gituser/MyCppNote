#pragma once    // 头文件保护，防止头文件被多次包含导致的编译错误
#ifndef TEST_H  // 如果宏 TEST_H 没有被定义
#define TEST_H  // 定义宏 TEST_H，表示该头文件已被包含

#include<iostream>
using namespace std; 

// 定义一个 Stu（学生）类
class Stu {
public:
    // 公有成员变量，表示学生的名字
    string m_name;
};

void test01(); 
void test02(); 
void test03(); 

#endif
#pragma once
#include<iostream>
using namespace std;
void test004();

template<class T1, class T2 = string>
class Stu {
public:
    T1 m_stu1;
    T2 m_stu2;
    Stu(T1 stu1, T2 stu2) : m_stu1(stu1), m_stu2(stu2) {};
    T1 getStu1();
    T2 getStu2(); 
};
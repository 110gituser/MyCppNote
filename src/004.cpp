#include "004.h"

template<class T1,class T2>
T1 Stu<T1,T2>::getStu1() {
    T1 a = 10;
    return m_stu1 + a;
}

template<class T1, class T2>
T2 Stu<T1, T2>::getStu2() { 
    return m_stu2;
}

void test004() {
    // 使用修正后的构造函数来创建对象
    Stu<int, string>* s1 = new Stu<int, string>(10, "hello");
    cout << s1->getStu1() << endl; // 输出 20
    cout << s1->getStu2() << endl; // 输出 "hello"
    delete s1;
}
#include"002.h"

template<typename T>    // 交换两个变量的值
void Swap(T&a,T&b){
    T tmp = a;
    a = b;
    b = tmp;
    cout<<"---Swap(T&a,T&b)---\n";
}

template<>      // 交换两个Stu对象的排名
void Swap<Stu>(Stu&s1,Stu&s2){
    int tmp = s1.m_rank;
    s1.m_rank = s2.m_rank;
    s2.m_rank = tmp;
    cout<<"---Swap<Stu>(Stu&s1,Stu&s2)---\n";
}

void test002(){
    Stu s1,s2;
    s1.m_rank = 1;
    s2.m_rank = 2;
    Swap(s1,s2);
    cout<<"s1.rank = "<<s1.m_rank<<" "<<"s2.rank = "<<s2.m_rank<<endl;
}

// 具体化（特例化、特化）的语法：
// template<> void 函数模板名<数据类型>(参数列表)
// template<> void 函数模板名 (参数列表)
// {
// // 函数体。
// }

// 编译器使用各种函数的规则：
// 1）具体化优先于常规模板，普通函数优先于具体化和常规模板。
// 2）如果希望使用函数模板，可以用空模板参数强制使用函数模板。
// 3）如果函数模板能产生更好的匹配，将优先于普通函数。
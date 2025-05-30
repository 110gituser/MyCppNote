#include"test01.h"

void test01(){
    cout<<"this is test01\n";
}

void test02(){
    cout<<"当前编译日期: "<<__DATE__<<endl;
    cout<<"当前编译时间: "<<__TIME__<<endl;
    cout<<"时间戳: "<<__TIMESTAMP__<<endl;
}

void test03(){
    Stu s1;
    s1.m_name="john";
    cout<<s1.m_name<<endl;
}
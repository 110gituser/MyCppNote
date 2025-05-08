#include"001.h"

// 类内函数模板实现
template<typename T>
Stu::Stu(T a){
    cout<<"a = "<<a<<endl;
}
template<typename T>
void Stu::show(T b){
    cout<<"b = "<<b<<endl;
}

// 类外函数模板实现
template<typename T1,typename T2>
void showThrNum(T1 a,T2 b,int c)
{
    cout<<"a is "<<a<<endl;
    cout<<"b is "<<b<<endl;
    cout<<"c is "<<c<<endl;
    cout<<"---showThrNum(T1 a,T2 b,int c)---\n";
}
template<typename T1,typename T2>
void showThrNum(T1 a,T2 b,char c)
{
    cout<<"a is "<<a<<endl;
    cout<<"b is "<<b<<endl;
    cout<<"c is "<<c<<endl;
    cout<<"---showThrNum(T1 a,T2 b,char c)---\n";
}

void test001(){
    // 1) test:
    // Stu s(5);
    Stu s("hello");
    s.show("world");
    s.show(100);
    cout<<"---------\n";

    // 2) test:
    int a = 10;
    int b = 20;
    showThrNum(a,b,30);

    // 3) test
    showThrNum(a,b,'c');
}
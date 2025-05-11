#include"003.h"

// 适用于 auto 不能自动推导时（如在函数声明中）
template<typename T1,typename T2>
// 通过 decltype 推导 a + b 表达式的类型作为返回值类型
auto add(T1 a ,T2 b)->decltype(a+b){
    return a+b;
}

// decltype应用开发中的常用用法
void test003(){
    // 一、基本用法：推导表达式类型
    int x = 40;
    decltype(x) y = x;      // y 的类型为 int
    cout << "Type of x: " << typeid(x).name() << endl;
    cout << "Type of y: " << typeid(y).name() << endl;
    
    // 二、与 auto 联用，用于精确推导返回值类型
    cout<<add(10.6,10.4)<<endl;
}
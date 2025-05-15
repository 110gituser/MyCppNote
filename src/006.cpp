#include"006.h"

void test006(){
    // Array<string,10> aa; // 创建模板类 Array 的对象。
    // aa[0] = "h"; aa[1] = "e"; aa[2] = "l"; aa[3] = "l"; aa[4] = "o";

    Vector<int> aa(1);      // 创建模板类 Vector 的对象。
    aa[0] = 1; aa[1] = 2; aa[2] = 3; aa[3] = 4; aa[4] = 5;

    for (int ii=0; ii<5;ii++) cout << "aa[" << ii << "]=" << aa[ii] << endl;
}
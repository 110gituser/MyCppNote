#include"test01.h"
#include <windows.h>

int main(){
    // 设置终端编码为 UTF-8 让中文正常显示
    SetConsoleOutputCP(CP_UTF8); // #include <windows.h>
    SetConsoleCP(CP_UTF8);

    // 不同操作系统的宏：__linux__、_WIN32
    #ifdef _WIN32
        cout<<"Windows!\n";
    #else
        cout<<"Not windows!\n";
    #endif

    test03();
}
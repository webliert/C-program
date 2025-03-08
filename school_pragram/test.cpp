/**
 * @FilePath     : /C-program/C++/CoreCode/CoreCode/引用.cpp
 * @Description  :  测试引用的基本概念，注意事项等
 * @Author       : webliert 81344809+webliert@users.noreply.github.com
 * @Version      : 0.0.1
 * @LastEditors  : webliert 81344809+webliert@users.noreply.github.com
 * @LastEditTime : 2025-03-08 20:46:04
 * @Copyright    : G AUTOMOBILE RESEARCH INSTITUTE CO.,LTD Copyright (c) 2025.
**/
#include <iostream>
#include <string>

using namespace std;

//引用的基本概念
int main(int argc, const char** argv) {
    int a = 10;
    int &b = a;
    cout << "a的地址为" << &a << endl;
    cout << "b的地址为" << &b << endl;
    cout << "a的值为" << a << endl; 
    cout << "b的值为" << b << endl;
    return 0;
}
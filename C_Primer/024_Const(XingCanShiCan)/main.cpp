//
//  main.cpp
//  024_Const(XingCanShiCan)
//
//  Created by John on 2018/8/30.
//  Copyright © 2018年 C++. All rights reserved.
//
//结论就是尽量使用常量引用
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    const int ci = 42 ;
    //ci = 0 ; error
    cout << "ci is " << ci << endl;
    int i = ci;
    cout << "i is " << i << endl;
    int *const p = &i;
    cout << "p is " << p << endl;
    *p = 0;
    cout << "p is " << p << endl;
    return 0;
}

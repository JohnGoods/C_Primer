//
//  main.cpp
//  006_Pointer
//
//  Created by John on 2018/8/14.
//  Copyright © 2018年 C++. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int ival = 42 ;
    int *p = &ival;
    cout << "&p is " << &p << endl; //存放ival地址
    cout << "*p is " << *p << endl; //42
    return 0;
}

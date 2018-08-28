//
//  main.cpp
//  022_PassByValueParameter
//
//  Created by John on 2018/8/28.
//  Copyright © 2018年 C++. All rights reserved.
//
//传值参数
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n = 0;
    int i = n;
    i = 42;  //i的值改变,n不会
    //指针形参
    int nn = 0, ii =42;
    int *p = &nn,*q = &ii;
    *p = 1;
    cout << "*p" << *p <<endl;
    p = q;
    cout << "p" << *p <<endl;
    return 0;
}

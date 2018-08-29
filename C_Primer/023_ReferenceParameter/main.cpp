//
//  main.cpp
//  023_ReferenceParameter
//
//  Created by John on 2018/8/29.
//  Copyright © 2018年 C++. All rights reserved.
//
//传引用参数
#include <iostream>
using namespace std;

void reset(int &i){
    i = 0;
}

int main(int argc, const char * argv[]) {
    int n = 0,i = 42;
    int &r = n; //r绑定了n //&r是一个指针
    r = 42;
    cout << "n is " << n << endl;
    r = i ;
    cout << "n is " << n << endl;
    i = r ;
    cout << "i is " << i << endl;
    
    int resetI = 42;
    reset(resetI);
    cout << "resetI is " << resetI << endl;
    
    return 0;
}

//
//  main.cpp
//  002_IoStream
//
//  Created by John on 2018/8/14.
//  Copyright © 2018年 C++. All rights reserved.
//

#include <iostream>
using namespace std;    //命名空间
int main(int argc, const char * argv[]) {
    cout << "Enter two numbers:" << endl;
    int v1,v2 = 0;
    cin >> v1 >> v2 ;
    cout << "The Sum of " << v1 << " and " << v2 << " is " << v1 + v2 << endl;
    
    //以下是练习题
    //打印乘法的
    cout << "mul" << endl;
    cout << "The Sum of " << v1 << " and " << v2 << " is " << v1 * v2 << endl;
    return 0;
}

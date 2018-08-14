//
//  main.cpp
//  007_Const
//
//  Created by John on 2018/8/14.
//  Copyright © 2018年 C++. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    const int bufSize = 512;
    const int i = 100;
    //const限定符，就不能赋值了，不然会错误的
    cout << "bufSize is " << bufSize <<endl;
    cout << "i is " << i <<endl;
    return 0;
}

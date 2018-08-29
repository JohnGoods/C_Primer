//
//  main.cpp
//  025_ArrayFormalParameter
//
//  Created by John on 2018/8/30.
//  Copyright © 2018年 C++. All rights reserved.
//
//数组形参
#include <iostream>
using namespace std;

//标准库规范
void printArray(const int *beg ,const int *end){
    while (beg!=end) {
        cout << *beg++ << endl;
    }
}

//显式传递一个表示数组大小的形参（常用）
void print(const int ia[],size_t size){
    for (size_t i = 0; i!=size; i++) {
        cout << ia[i] << endl;
    }
}

int main(int argc, const char * argv[]) {
    int printArray1[11] = {0,1,2,3,4,5,6,7,8,9,10};
    printArray(begin(printArray1),end(printArray1));
    cout << "----------------" << endl;
    print(printArray1,end(printArray1) - begin(printArray1));
    return 0;
}

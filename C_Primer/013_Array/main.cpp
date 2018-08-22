//
//  main.cpp
//  013_Array
//
//  Created by John on 2018/8/22.
//  Copyright © 2018年 C++. All rights reserved.
//

#include <iostream>
#include <iterator>
using namespace std;
using std::string;

//网上找来的获取长度方法
template <class T>
int getArrayLen(T& array)  //使用模板定义一个函数getArrayLen,该函数将返回数组array的长度
{
    return (sizeof(array) / sizeof(array[0]));
}

int main(int argc, const char * argv[]) {
    int ia1[] = {1,2,3};
    int a2[5] = {0,1,2};
    string s1[3] = {"hi","bye"};
    //自己用的蠢方法
    for(int i = 0; i < getArrayLen(ia1);i++){
        cout << "ial i is" << i << "val is "<< ia1[i] << endl;
    }
    for(int i = 0; i < getArrayLen(a2);i++){
        cout << "a2 i is" << i << "val is "<< a2[i] << endl;
    }
    for(int i = 0; i < getArrayLen(s1);i++){
        cout << "s1 i is" << i << "val is "<< s1[i] << endl;
    }
    
    //标准库函数begin和end
    int ia2[] = {0,1,2,3,4,5,6,7,8,9};
    //获取第一个和最后一个元素
    int *pbeg = begin(ia2) , *pend = end(ia2);
    //循环遍历
    while (pbeg != pend && *pbeg >= 0) {
        cout << "while--ia2-->" << *pbeg << endl;
        ++pbeg;
    }
    return 0;
}

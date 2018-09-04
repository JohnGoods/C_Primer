//
//  main.cpp
//  026_VariableArgument
//
//  Created by John on 2018/9/4.
//  Copyright © 2018年 C++. All rights reserved.
//

#include<iostream>
#include<initializer_list>
using namespace std;
using std::string;

int sum(initializer_list<int> li)//sum函数接受一个initialzer_list的对象，计算列表中所有元素的和
{
    int tmp = 0;
    for(const auto &a: li)//范围for循坏
    {
        tmp += a;//a 的类型 const int &
    }
    return tmp;
}


int main()
{
    int huu = sum({ 1, 2, 3, 4, 5 });
    cout << huu << endl;//15
    getchar();
    return 0;
}


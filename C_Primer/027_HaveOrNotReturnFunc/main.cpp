//
//  main.cpp
//  027_HaveOrNotReturnFunc
//
//  Created by John on 2018/9/4.
//  Copyright © 2018年 C++. All rights reserved.
//

#include<iostream>
using namespace std;
using std::string;
//隐式返回咯
void swap(int &v1,int &v2){
    if(v1 == v2)
        return;
    int tmp = v2;
    v2 = v1;
    v1 = tmp;
}

int main(){
    int a = 1;
    int b = 2;
    swap(a,b);
    cout << "a is "<< a << endl;
    cout << "b is "<< b << endl;
    return 0;
}

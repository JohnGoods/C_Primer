//
//  main.cpp
//  005_If
//
//  Created by John on 2018/8/14.
//  Copyright © 2018年 C++. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    cout << "please enter number" << endl;
    int val = 0;
    cin >> val;
    //判断输入是否数字
    if(cin.fail()){
        cout << "enter not num" << endl;
    }else{
        cout << "enter is num" << endl;
    }
    return 0;
}

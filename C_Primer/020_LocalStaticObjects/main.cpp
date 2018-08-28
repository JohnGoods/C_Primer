//
//  main.cpp
//  020_LocalStaticObjects
//
//  Created by John on 2018/8/28.
//  Copyright © 2018年 C++. All rights reserved.
//

#include <iostream>
using namespace std;

size_t count_calls(){
    static size_t ctr = 0;//调用结束后这个值仍然有用
    return ++ctr;
}

int main(int argc, const char * argv[]) {
    for (int i = 0; i<10; i++) {
        cout << count_calls() << endl;
    }
    return 0;
}

//
//  main.cpp
//  019_FuncBase
//
//  Created by John on 2018/8/28.
//  Copyright © 2018年 C++. All rights reserved.
//

#include <iostream>
using namespace std;

int fact(int val){
    int ret = 1;
    while (val > 1) {
        ret*= val--;
    }
    return ret;
}

int main(int argc, const char * argv[]) {
    int j = fact(5);
    cout << "j is " << j << endl;
    return 0;
}

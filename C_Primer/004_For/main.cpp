//
//  main.cpp
//  004_For
//
//  Created by John on 2018/8/14.
//  Copyright © 2018年 C++. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    cout << "Sum of 1 - 100 val is" << sum << endl;
    return 0;
}

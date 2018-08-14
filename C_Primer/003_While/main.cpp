//
//  main.cpp
//  003_While
//
//  Created by John on 2018/8/14.
//  Copyright © 2018年 C++. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int sum = 0 , val = 1;
    while (val <= 10) {
        sum += val;
        val++;
    }
    cout << "Sum of 1 to 10 val is " << sum << endl;
    return 0;
}

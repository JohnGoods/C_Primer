//
//  main.cpp
//  017_Switch
//
//  Created by John on 2018/8/28.
//  Copyright © 2018年 C++. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int i;
    cout << "please read key" << endl;
    cin >> i;
    switch (i) {
        case 1:
            cout << 1 << endl;
            break;
        case 2:
            cout << 2 << endl;
            break;
        case 3:
            cout << 3 << endl;
            break;
        case 4:
            cout << 4 << endl;
            break;
        default:
            cout << "not 1 - 4" << endl;
            break;
    }
    return 0;
}

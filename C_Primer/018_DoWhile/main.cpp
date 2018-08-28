//
//  main.cpp
//  018_DoWhile
//
//  Created by John on 2018/8/28.
//  Copyright © 2018年 C++. All rights reserved.
//

#include <iostream>
using namespace std;
using std::string;
int main(int argc, const char * argv[]) {
    string rsp;
    do {
        cout << "please enter tow num" << endl;
        int val1,val2 = 0;
        cin >> val1 >> val2;
        cout << "v1 + v2 = " << val1 + val2 << endl;
        cout << "need over? over please enter n" << endl;
        cin >> rsp;
    } while (!rsp.empty() && rsp[0]!='n');
    return 0;
}

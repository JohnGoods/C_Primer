//
//  main.cpp
//  008_Object
//
//  Created by John on 2018/8/15.
//  Copyright © 2018年 C++. All rights reserved.
//

#include <iostream>
using namespace std;
struct _data{
    int num = 1;
    string text = "test";
};

int main(int argc, const char * argv[]) {
    _data data;
    int i = data.num;
    string text = data.text;
    cout << " i is " << i << endl;
    cout << "text is " << text << endl;
    return 0;
}

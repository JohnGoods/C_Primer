//
//  main.cpp
//  011_StdlibVector
//
//  Created by John on 2018/8/17.
//  Copyright © 2018年 C++. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
using std::vector;
using std::string;
int main(int argc, const char * argv[]) {
    vector<string> v1{"a","b","c"};
    vector<int> v2; //空对象
    for (int i = 1; i <= 100 ; i++) {
        v2.push_back(i);
    }
    for (int i = 0; i < v2.size(); i++) {
        cout << "v2 num is" << v2[i] << endl;
    }
    return 0;
}

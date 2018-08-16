//
//  main.cpp
//  010_StdlibString
//
//  Created by John on 2018/8/16.
//  Copyright © 2018年 C++. All rights reserved.
//

#include <iostream>
using std::string; //定义

int main(int argc, const char * argv[]) {
    string s; //默认定义
    string c = string(10,'c');
    int sLenght = s.size();
    bool isNull = c.empty();
    std::cout << "s is " << s << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "sLenght is " << sLenght << std::endl;
    std::cout << "isNull is " << isNull << std::endl;
    //////////////////////
    s = "hello wold";
    for (auto &c :s) {
        c = toupper(c);
    }
    std::cout << s << std::endl;
    ///////////////////////
    for (decltype(s.size()) index = 0; index!=s.size() && !isspace(s[index]); index++) {
        s[index] = tolower(s[index]);
    }
    std::cout << s << std::endl;
    return 0;
}

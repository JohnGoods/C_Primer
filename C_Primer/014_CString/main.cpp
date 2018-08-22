//
//  main.cpp
//  014_CString
//
//  Created by John on 2018/8/22.
//  Copyright © 2018年 C++. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
using std::string;

int main(int argc, const char * argv[]) {
    char ca[] = {'s','s','s','s','s'};
    //strlen(ca)是不断找,直到遇到空字符
    cout << "ca lenght is " << strlen(ca) - 1 << endl;
    string s1 = "string1";
    string s2 = "string_two";
    bool s1_s2 = false;
    if(s1 < s2){
        s1_s2 = true;
    }
    cout << "s1<s2? " << s1_s2 << endl;
    
    //比较c1和c2的长度,相等返回0,c1>c2返回整数,c1<c2返回负数
    char c1[] = "A char char char";
    char c2[] = "B char char ya";
    cout << "strcmp" << strcmp(c1,c2) << endl;
    return 0;
}

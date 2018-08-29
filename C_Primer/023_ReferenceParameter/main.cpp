//
//  main.cpp
//  023_ReferenceParameter
//
//  Created by John on 2018/8/29.
//  Copyright © 2018年 C++. All rights reserved.
//
//传引用参数
#include <iostream>
using namespace std;
using std::string;

//返回多个参数
string::size_type find_char(const string &s,char c,string::size_type &occurs){
    auto ret = s.size();
    occurs = 0;
    for (decltype(ret) i = 0; i != s.size(); ++i) {
        if(s[i] == c){
            if(ret == s.size()){
                ret = i;
            }
            occurs ++ ;
        }
    }
    return ret; //隐式返回occurs
}


void reset(int &i){
    i = 0;
}

int main(int argc, const char * argv[]) {
    int n = 0,i = 42;
    int &r = n; //r绑定了n //&r是一个指针
    r = 42;
    cout << "n is " << n << endl;
    r = i ;
    cout << "n is " << n << endl;
    i = r ;
    cout << "i is " << i << endl;
    
    int resetI = 42;
    reset(resetI);
    cout << "resetI is " << resetI << endl;
    
    string s = "abcdeeoffdos";
    string::size_type ctr;
    auto index = find_char(s, 'o', ctr);    //index = 首次出现的下标 , ctr保存出现的次数
    cout << "index is " << index << endl;
    cout << "ctr is " << ctr << endl;
    return 0;
}

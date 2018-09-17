//
//  main.cpp
//  029_FuncOverloaded
//
//  Created by John on 2018/9/17.
//  Copyright © 2018年 C++. All rights reserved.
//函数重载

#include <iostream>
using namespace std;
using std::string;

void print(const char *p){
    cout << "p is " << p << endl;
}
void print(const int *beg,const int *end){
    cout << "beg is " << *beg << " end is " << *end <<endl;
}
void print(const int ia[],size_t size){
    cout << ia << endl;
}

int main(int argc, const char * argv[]) {
    int j[2] = {0,1};
    print("Hello word");
    print(j,end(j) - begin(j));
    print(begin(j),end(j));
    return 0;
}

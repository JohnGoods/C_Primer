//
//  main.cpp
//  012_IteratorIntroduce
//
//  Created by John on 2018/8/17.
//  Copyright © 2018年 C++. All rights reserved.
//

#include <iostream>
#include <iterator>
using std::string;
using namespace std;
int main(int argc, const char * argv[]) {
    string s = ("Some string");
    if(s.begin() != s.end()){
        auto it = s.begin();
        *it = toupper(*it);
    }
    cout << "s is " << s << endl;
    
    for (auto it = s.begin(); it != s.end() &&!isspace(*it); it++) {
        *it = toupper(*it);
    }
    cout << "s is " << s << endl;
    //二分搜索
    string text = "justForTestlalalala";
    auto beg = text.begin() , end = text.end();
    auto mid = text.begin()  + (end - beg) / 2;
    auto sought = beg;
    while (mid != end && mid != sought) {
        if(*sought < *mid){
            end = mid;
        }else{
            beg = end + 1;
        }
        mid = beg + (end - beg) / 2;
    }
    std::cout << "mid is " << *mid << std::endl;
    return 0;
}

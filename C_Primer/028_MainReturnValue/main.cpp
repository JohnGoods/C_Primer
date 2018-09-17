//
//  main.cpp
//  028_MainReturnValue
//
//  Created by John on 2018/9/4.
//  Copyright © 2018年 C++. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    bool some_failure = true;
    if(some_failure){
        return EXIT_FAILURE;
    }else{
        return EXIT_SUCCESS;
    }
}

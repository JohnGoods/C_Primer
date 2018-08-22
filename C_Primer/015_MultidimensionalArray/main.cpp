//
//  main.cpp
//  015_MultidimensionalArray
//
//  Created by John on 2018/8/22.
//  Copyright © 2018年 C++. All rights reserved.
//

#include <iostream>
#include <iterator>
using namespace std;

int main(int argc, const char * argv[]) {
    int rowCnt = 3, colCnt = 4;
    int ia[rowCnt][colCnt];
    //int arr[10][20][30] = {0};  //默认全部设为0
    for (int i = 0; i != rowCnt; i++) {
        for(int j = 0; j != colCnt; j++) {
            int sum = i+j;
            ia[i][j] = sum;
            cout << "ia i is " << i << " j is " << j << " ia[i][j] is " << ia[i][j] << endl;
        }
    }
    return 0;
}

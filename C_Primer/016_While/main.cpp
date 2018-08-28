#include<iostream>
using namespace std;
int main(){
    int num = 0;
    int sum = 0;
    while(num <= 10){
        sum += num;
        num ++ ;
    }
    cout<<"sum is " << sum  <<endl;
    
    //作用域语句
    while(num <= 20){
        cout<<"num is " << num <<endl;
        num ++;
    }
    return 0;
}

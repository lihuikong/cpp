#include<iostream>

int Son_example1(int m){
    return m * 2;
}

int example_8(int n){
    int result = 0;
    //循环：固定次数（与n无关）
    for(int i = 0;i < 10;++i){
        result += i;
    }

    //分支
    if(n % 2 != 0){
        result *= 2;
    }else{
        result *= n;
    }

    //子函数调用
    result += Son_example1(n);

    //递归
    if(result < 100){
        example_8(n * 2);
    }

    return result;
}

int main(){
    int n = 0;
    std::cin >> n;
    std::cout << example_8(n) << std::endl;
}
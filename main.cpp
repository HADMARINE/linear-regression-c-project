//
//  main.cpp
//  linear-regression-c-project
//
//  Created by 이호준 on 2019/11/16.
//


//include
#include "main.hpp"
#include "iostream"

//define

//using
using namespace std;

//function declaration
int* inputMethod();
void printValue(int* valuePtr);
int* calculateLinear();

//MAIN Method
int main(){
    return 0;
}


//functions
int* inputMethod(){
    //데이터를 입력받아 포인터 주소를 반환합니다.
    int* inputPtr;
    scanf("%d",inputPtr);
    return inputPtr;
}

void printValue(int* valuePtr){
    //포인터 주소를 받아 값을 출력합니다.
    cout << &valuePtr << endl;
}

int* calculateLinear(){
    //계산하는 메인 메서드입니다.
    return 0;
}


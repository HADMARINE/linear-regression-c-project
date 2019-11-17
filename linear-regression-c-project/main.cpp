//
//  main.cpp
//  linear-regression-c-project
//
//  Created by 이호준 on 2019/11/16.
//


//include와 define, function declaration - main.hpp에 하시길 바랍니다

#include "main.hpp"

//MAIN Method
int main(){
    cout << "값을 입력하세요" << endl;
    int* testInputValue1 = inputMethod();
    printValue(testInputValue1);
    return 0;
}


//functions
int* inputMethod(){
    //데이터를 입력받아 포인터 주소를 반환합니다.
    int* inputPtr;
    int inputValue;
    
    scanf("%d", &inputValue);
    inputPtr = &inputValue;
    
    return inputPtr;
}

void printValue(int* valuePtr){
    //포인터 주소를 받아 값을 출력합니다.
    printf("%d\n", *valuePtr);
}

int* calculateLinearMain(){
    //계산하는 메인 메서드입니다.
    return 0;
}


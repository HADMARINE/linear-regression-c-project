//  main.cpp
//  linear-regression-c-project
//
//  Created by 이호준 on 2019/11/16.
//


//include, define, function declaration -> main.hpp에서 하십시오

#include "main.hpp"

void howToUseKeyIoMethod(){
    //키보드 입출력 메서드의 사용 방법입니다.
    //키보드 입출력 변수는 포인터 변수를 사용합니다.
    cout << "값을 입력하세요" << endl;
    int* testInputValue1 = inputMethod();
    printValue(testInputValue1);
}

//MAIN Method
//메인 메서드에서는 되도록이면 함수의 호출만 일어나도록 하십시오.
int main(){
    howToUseKeyIoMethod();
    return 0;
}


//functions
int* inputMethod(){
    //데이터를 입력받아 저장하고 포인터 주소를 반환합니다.
    int* inputPtr;
    int inputValue;
    
    scanf("%d", &inputValue);
    inputPtr = &inputValue;
    
    return inputPtr;
}

void printValue(int* valuePtr){
    //포인터 주소를 받아 값을 출력합니다.
    cout << *valuePtr << endl;
}

int* calculateLinearMain(){
    //계산하는 메인 메서드입니다.
    return 0;
}

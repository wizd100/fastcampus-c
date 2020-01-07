//
//  main.c
//  fastcampus-c
//
//  Created by kwan ho baek on 07/01/2020.
//  Copyright © 2020 kwan ho baek. All rights reserved.
//

#include <stdio.h>

//정적변수는 0으로 자동으로 값을 대입
int c;

int main(void) {
    //변수의 초기화
    int a = 7;
    printf("The Number is %d \n", a);
    
    //변수가 초기화가 안된 것 쓰레기값이 들어감
    int b;
    printf("The Number is %d \n", b);
    
    //정적변수
    printf("The Number is %d \n", c);
    return 0;
}

//
//  main.c
//  fastcampus-c
//
//  Created by kwan ho baek on 07/01/2020.
//  Copyright © 2020 kwan ho baek. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int a = 10;
    int b[10];
    b = &a; //배열은 상수이기 때문에 에러가 남
    
    return 0;
}

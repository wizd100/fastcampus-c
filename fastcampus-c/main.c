//
//  main.c
//  fastcampus-c
//
//  Created by kwan ho baek on 07/01/2020.
//  Copyright © 2020 kwan ho baek. All rights reserved.
//

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int main(void) {
    int(*fp)(int, int) = add;
    printf("%d\n", fp(10, 3));
    fp = sub;
    printf("%d\n", fp(10, 3));
    
    return 0;
}

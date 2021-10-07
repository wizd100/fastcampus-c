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

int (*process(char* a))(int, int) {
    printf("%s\n", a);
    return add;
}

int main(void) {
    printf("%d\n", process("10과 20을 더함 ")(10, 20));
    
    return 0;
}

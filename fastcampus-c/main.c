//
//  main.c
//  fastcampus-c
//
//  Created by kwan ho baek on 07/01/2020.
//  Copyright © 2020 kwan ho baek. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int a[5] = {1,2,3,4,5};
    int *b = a;
    printf("%d\n", b[2]);
    
    return 0;
}

//
//  main.c
//  fastcampus-c
//
//  Created by kwan ho baek on 07/01/2020.
//  Copyright © 2020 kwan ho baek. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *a = malloc(100);
    memset(a, 'A', 100);
    for (int i = 0; i < 100; i++) {
        printf("%c ", a[i]);
    }
    
    return 0;
}

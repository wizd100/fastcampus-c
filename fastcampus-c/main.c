//
//  main.c
//  fastcampus-c
//
//  Created by kwan ho baek on 07/01/2020.
//  Copyright © 2020 kwan ho baek. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int a[2][5] = {{1,2,3,4,5}, {6,7,8,9,10}};
    int (*p)[5] = a[1];
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d ", p[0][i]);
    }
    
    return 0;
}

//
//  main.c
//  fastcampus-c
//
//  Created by kwan ho baek on 07/01/2020.
//  Copyright © 2020 kwan ho baek. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *a = malloc(sizeof(int));
    printf("%d\n", a);
    free(a);
    a = malloc(sizeof(int));
    printf("%d\n", a);
    free(a);
    
    return 0;
}

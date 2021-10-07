//
//  main.c
//  fastcampus-c
//
//  Created by kwan ho baek on 07/01/2020.
//  Copyright © 2020 kwan ho baek. All rights reserved.
//

#include <stdio.h>

void myFunction() {
    printf("myFunction\n");
}

void yourFunction() {
    printf("yourFunction\n");
}


int main(void) {
    void(*fp)() = myFunction;
    fp();
    fp = yourFunction;
    fp();
    
    
    return 0;
}

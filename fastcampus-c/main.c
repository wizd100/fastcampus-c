//
//  main.c
//  fastcampus-c
//
//  Created by kwan ho baek on 07/01/2020.
//  Copyright © 2020 kwan ho baek. All rights reserved.
//

#include <stdio.h>
#define SIZE 10000
#define INF 999999

int stack[SIZE];
int top = -1;

void push(int data) {
    if (top == SIZE - 1) {
        printf("stack overflow");
        return;
    }
    stack[++top] = data;
}

int pop() {
    if (top == -1) {
        printf("stack underflow");
    }
    return stack[top--];
}

void show() {
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}

int main(void) {
    push(7);
    push(5);
    push(4);
    pop();
    show();
    return 0;
}

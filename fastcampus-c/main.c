//
//  main.c
//  fastcampus-c
//
//  Created by kwan ho baek on 07/01/2020.
//  Copyright © 2020 kwan ho baek. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define INF 999999

typedef struct {
    int data;
    struct Node *next;
} Node;

typedef struct {
    Node *top;
} Stack;

void push(Stack *stack, int data) {
    Node *node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = stack->top;
    stack->top = node;
}

int pop(Stack *stack) {
    if (stack->top == NULL) {
        printf("stack underflow");
        return -INF;
    }
    Node *node = stack->top;
    int data = node->data;
    stack->top = node->next;
    free(node);
    return data;
}

void show(Stack *stack) {
    Node *cur = stack->top;
    while (cur != NULL) {
        printf("%d\n", cur->data);
        cur = cur->next;
    }
}

int main(void) {
    Stack s;
    s.top = NULL;
    push(&s, 7);
    push(&s, 5);
    push(&s, 4);
    push(&s, 3);
    pop(&s);
    show(&s);
    return 0;
}

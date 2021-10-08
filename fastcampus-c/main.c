//
//  main.c
//  fastcampus-c
//
//  Created by kwan ho baek on 07/01/2020.
//  Copyright © 2020 kwan ho baek. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int data;
    struct Node *prev;
    struct Node *next;
} Node;

Node *head;
Node *tail;

void insert(int data) {
    Node *node = (Node*)malloc(sizeof(Node));
    node->data = data;
    Node *cur;
    cur = head->next;
    while (cur->data < data && cur != tail) {
        cur = cur->next;
    }
    Node *prev = cur->prev;
    prev->next = node;
    node->prev = prev;
    cur->prev = node;
    node->next = cur;
}

void removeFront() {
    Node *node = head->next;
    head->next = node->next;
    Node *next = node->next;
    next->prev = head;
    free(node);
}

void show() {
    Node *cur = head->next;
    while (cur != tail) {
        printf("%d ", cur->data);
        cur = cur->next;
    }
}

int main(void) {
    head = (Node*)malloc(sizeof(Node));
    tail = (Node*)malloc(sizeof(Node));
    head->next = tail;
    head->prev = head;
    tail->next = tail;
    tail->prev = head;
    insert(2);
    insert(1);
    insert(3);
    insert(9);
    insert(7);
    removeFront();
    show();
    return 0;
}

//
//  main.c
//  fastcampus-c
//
//  Created by kwan ho baek on 07/01/2020.
//  Copyright © 2020 kwan ho baek. All rights reserved.
//

#include <stdio.h>
#define INF 10000

int arr[INF];
int count = 0;

void addBack(int data) {
    arr[count] = data;
    count++;
}

void addFirst(int data) {
    for (int i = count; i >= 1; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = data;
    count++;
}

void show() {
    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
}

void removeAt(int index) {
    for (int i = index; i < count; i++) {
        arr[i] = arr[i + 1];
    }
    count--;
}

int main(void) {
    addBack(5);
    addBack(7);
    addFirst(1);
    removeAt(1);
    show();
    return 0;
}

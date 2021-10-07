//
//  main.c
//  fastcampus-c
//
//  Created by kwan ho baek on 07/01/2020.
//  Copyright © 2020 kwan ho baek. All rights reserved.
//

#include <stdio.h>

typedef struct Student {
    char studentId[10];
    char name[10];
    int gradle;
    char major[100];
} Student;

int main(void) {
    Student *s = malloc(sizeof(Student));
    strcpy(s->studentId, "20211008");
    strcpy(s->name, "bkh");
    s->gradle = 4;
    strcpy(s->major, "computer science");
    
    printf("%s\n", s->studentId);
    printf("%s\n", s->name);
    printf("%d\n", s->gradle);
    printf("%s\n", s->major);
    
    return 0;
}

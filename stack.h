#ifndef STACK_H
#define STACK_H

#include "student.h"

typedef struct StackNode {
    Student student;
    struct StackNode *next;
} StackNode;

void push(StackNode **top, Student s);
Student pop(StackNode **top);
int isStackEmpty(StackNode *top);

#endif

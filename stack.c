#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void push(StackNode **top, Student s) {
    StackNode *newNode = (StackNode*)malloc(sizeof(StackNode));
    newNode->student = s;
    newNode->next = *top;
    *top = newNode;
}

Student pop(StackNode **top) {
    Student s = {0};
    if (*top == NULL) {
        printf("Stack is empty!\n");
        return s;
    }
    StackNode *temp = *top;
    s = temp->student;
    *top = (*top)->next;
    free(temp);
    return s;
}

int isStackEmpty(StackNode *top) {
    return top == NULL;
}

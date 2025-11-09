#ifndef BST_H
#define BST_H

#include "student.h"

typedef struct Node {
    Student data;
    struct Node *left, *right;
} Node;

Node* insertStudent(Node* root, Student s);
Node* searchStudent(Node* root, int id);
void inorderDisplay(Node* root);
void freeTree(Node* root);

#endif

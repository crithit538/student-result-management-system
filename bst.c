#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bst.h"

Node* createNode(Student s) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = s;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node* insertStudent(Node* root, Student s) {
    if (root == NULL) return createNode(s);
    if (s.id < root->data.id)
        root->left = insertStudent(root->left, s);
    else if (s.id > root->data.id)
        root->right = insertStudent(root->right, s);
    return root;
}

Node* searchStudent(Node* root, int id) {
    if (root == NULL || root->data.id == id)
        return root;
    if (id < root->data.id)
        return searchStudent(root->left, id);
    return searchStudent(root->right, id);
}

void inorderDisplay(Node* root) {
    if (root != NULL) {
        inorderDisplay(root->left);
        printf("ID: %d | Name: %s | CGPA: %.2f | Grade: %c\n",
               root->data.id, root->data.name, root->data.cgpa, root->data.grade);
        inorderDisplay(root->right);
    }
}

void freeTree(Node* root) {
    if (root == NULL) return;
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

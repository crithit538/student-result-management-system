#include <stdio.h>
#include <string.h>
#include "student_utils.h"

void addStudent(Node **root, StackNode **stack) {
    Student s;
    printf("\nEnter student ID: ");
    scanf("%d", &s.id);
    printf("Enter student name: ");
    scanf(" %[^\n]", s.name);

    inputSubjects(&s);
    s.cgpa = calculateCGPA(&s);
    s.grade = calculateGrade(s.cgpa);

    *root = insertStudent(*root, s);
    push(stack, s);

    printf("\n✅ Student added successfully!\n");
}

void searchAndDisplay(Node *root) {
    int id;
    printf("\nEnter ID to search: ");
    scanf("%d", &id);
    Node *found = searchStudent(root, id);
    if (found) {
        printf("\n🎯 Student Found:\n");
        printf("ID: %d | Name: %s | CGPA: %.2f | Grade: %c\n",
               found->data.id, found->data.name, found->data.cgpa, found->data.grade);
    } else {
        printf("\n❌ Student not found!\n");
    }
}

void displayAll(Node *root) {
    printf("\n📋 All Students:\n");
    inorderDisplay(root);
}

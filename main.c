#include <stdio.h>
#include <stdlib.h>
#include "student_utils.h"

int main() {
    Node *root = NULL;
    StackNode *stack = NULL;
    int choice;

    while (1) {
        printf("\n--- STUDENT RESULT MANAGEMENT SYSTEM ---\n");
        printf("1. Add Student\n");
        printf("2. Search Student\n");
        printf("3. Display All Students\n");
        printf("4. Undo Last Entry\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(&root, &stack);
                break;
            case 2:
                searchAndDisplay(root);
                break;
            case 3:
                displayAll(root);
                break;
            case 4:
                if (!isStackEmpty(stack)) {
                    Student s = pop(&stack);
                    printf("\n⏪ Undid addition of: %s (ID: %d)\n", s.name, s.id);
                } else {
                    printf("\n❌ Nothing to undo!\n");
                }
                break;
            case 5:
                freeTree(root);
                printf("\n👋 Exiting program...\n");
                exit(0);
            default:
                printf("\nInvalid choice!\n");
        }
    }
    return 0;
}

#include <stdio.h>
#include "subjects.h"

void inputSubjects(Student *s) {
    printf("Enter number of subjects: ");
    scanf("%d", &s->subjectCount);

    for (int i = 0; i < s->subjectCount; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &s->marks[i]);
    }
}

float calculateCGPA(Student *s) {
    float sum = 0;
    for (int i = 0; i < s->subjectCount; i++) {
        sum += s->marks[i];
    }
    s->cgpa = sum / s->subjectCount / 9.5;
    return s->cgpa;
}

char calculateGrade(float cgpa) {
    if (cgpa >= 9) return 'A';
    else if (cgpa >= 8) return 'B';
    else if (cgpa >= 7) return 'C';
    else if (cgpa >= 6) return 'D';
    else return 'F';
}

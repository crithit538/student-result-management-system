#ifndef STUDENT_H
#define STUDENT_H

typedef struct Student {
    int id;
    char name[50];
    float marks[5];
    int subjectCount;
    float cgpa;
    char grade;
} Student;

#endif

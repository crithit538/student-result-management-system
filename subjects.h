#ifndef SUBJECTS_H
#define SUBJECTS_H

#include "student.h"

void inputSubjects(Student *s);
float calculateCGPA(Student *s);
char calculateGrade(float cgpa);

#endif

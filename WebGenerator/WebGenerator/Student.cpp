#include "Student.h"

void addStudent(Student**& Students, size_t& numOfStudent, Student* newStudent) {
    for (size_t i = 0; i < numOfStudent - 1; i++) {
        if (Students[i] == nullptr) {
            Students[i] = newStudent;
            return;
        }
    }

    Student** tmp = (Student**)malloc((numOfStudent + 5) * sizeof(Student*));
    if (tmp == NULL) return;

    for (size_t i = 0; i < numOfStudent - 1; i++) {
        tmp[i] = Students[i];
    }

    tmp[numOfStudent - 1] = newStudent;
    for (size_t i = numOfStudent; i < numOfStudent + 5; i++) {
        tmp[i] = nullptr;
    }
    numOfStudent += 5;

    free(Students);
    Students = nullptr;

    Students = tmp;
}

void printStudentList(Student** students){
    Student** currentStudent = students;
    while(*currentStudent != NULL){
        wprintf(L"%ls  %ls\n", (*currentStudent)->id, (*currentStudent)->name);
        currentStudent++;
    }
}

void printStudentInfo(Student* student) {
    wprintf(L"%ls  %ls\n", student->id, student->name);
    wprintf(L"Khoa: %ls\n", student->faculty);
    wprintf(L"Ngày sinh: %ls\n", student->dob);
}
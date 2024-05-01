#pragma once

#include <cwchar>
#include <stdlib.h>
#include "Hobby.h"

using namespace std;

struct Student {
	wchar_t id[10];
    wchar_t name[30];
    wchar_t faculty[30];
    int year = 0;
    wchar_t dob[15];
    wchar_t image[20];
    wchar_t description[1000];
	Hobby hobby[10];
    size_t numberOfHobby;
};

void addStudent(Student**& Students, size_t& numOfStudent, Student* newStudent);

void printStudentList(Student** students);

void printStudentInfo(Student* student);
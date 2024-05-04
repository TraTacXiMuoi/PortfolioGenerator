#pragma once

#include <cwchar>
#include <stdlib.h>
#include "Hobby.h"

using namespace std;

struct Student {
	wchar_t id[10] = L"";
    wchar_t name[30] = L"";
    wchar_t faculty[30] = L"";
    int year = 0;
    wchar_t dob[15] = L"";
    
    wchar_t description[1000] = L"";
    Hobby hobby[10]{};
    size_t numberOfHobby = 0;

    wchar_t image[20] = L"";
};

void addStudent(Student**& Students, size_t& numOfStudent, Student* newStudent);

void printStudentList(Student** students);

void printStudentInfo(Student* student);
// d:\\second_year_hcmus\\ktlt\\website\\data.csv

#pragma region Read_And_Print_Console
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <locale>
//#include <codecvt>
//#include <fstream>
//#include <string>
//#include <io.h>
//#include <fcntl.h>
//
//using namespace std;
//
//int wmain() {
//   _setmode(_fileno(stdout), _O_U8TEXT);
//   _setmode(_fileno(stdin), _O_U8TEXT);
//    setlocale(LC_ALL, "en_US.UTF-8");
////    wifstream file("d:\\second_year_hcmus\\ktlt\\website\\data.csv");
////    file.imbue(locale(file.getloc(), new codecvt_utf8<wchar_t, 0x10ffff, consume_header>));
//
////    if (!file.is_open()) {
////        wcerr << L"error opening file" << endl;
////        return 1;
////    }
//
////    wstring line;
////    while (getline(file, line)) {
////        wcout << line << endl;
////    }
//
//   return 0;
//}
#pragma endregion

#pragma region Hex_Print
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main() {
//	FILE* f = fopen("d:\\second_year_hcmus\\ktlt\\website\\data.csv", "rb");
//
//	fseek(f, 0, SEEK_END);
//	long file_size = ftell(f);
//	rewind(f);
//
//	unsigned char* buffer = (unsigned char*)malloc(file_size);
//	if (buffer == NULL) return 1;
//
//	fread(buffer, sizeof(unsigned char), file_size, f);
//	for (int i = 0; i < file_size; i++) {
//		printf("%02x ", buffer[i]);
//	}
//	return 0;
//}
#pragma endregion

#pragma region Read_Directly_Not_Convert
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <locale.h>
//
//
//// Define the maximum number of students
//#define MAX_STUDENTS 100

// Define the structure to store student information
//struct Student {
//    char id[10];
//    char name[100];
//    char major[100];
//    int graduation_year;
//    char dob[20];
//    char image_filename[100];
//    char about_me[500];
//    char interests[200];
//    char hobbies[200];
//};
//
// Read student data from CSV file
//int read_students(struct Student students[]) {
//    FILE* file = fopen("d:\\second_year_hcmus\\ktlt\\website\\data.csv", "r");
//    if (file == NULL) {
//        printf("Error opening file.\n");
//        return 0;
//    }
//
//    int count = 0;
//    char line[1000];
//    while (fgets(line, sizeof(line), file)) {
//        sscanf(line, "%[^,],%[^,],%[^,],%d,%[^,],%[^,],%[^,],%[^,],%[^\n]",
//            students[count].id, students[count].name, students[count].major,
//            &students[count].graduation_year, students[count].dob,
//            students[count].image_filename, students[count].about_me,
//            students[count].interests, students[count].hobbies);
//        count++;
//    }
//
//    fclose(file);
//    return count;
//}
//
// Generate HTML portfolio
//void generate_html(struct Student students[], int num_students) {
//    FILE* html_file = fopen("portfolio.html", "w");
//    if (html_file == NULL) {
//        printf("Error creating HTML file.\n");
//        return;
//    }
//
//    fprintf(html_file, "<html>\n<head>\n<title>Student Portfolio</title>\n</head>\n<body>\n");
//
//    for (int i = 0; i < num_students; i++) {
//        fprintf(html_file, "<h1>%s</h1>\n", students[i].name);
//        fprintf(html_file, "<p>Major: %s</p>\n", students[i].major);
//        fprintf(html_file, "<p>Year of Graduation: %d</p>\n", students[i].graduation_year);
//        fprintf(html_file, "<p>Date of Birth: %s</p>\n", students[i].dob);
//        fprintf(html_file, "<p>About Me: %s</p>\n", students[i].about_me);
//        fprintf(html_file, "<p>Interests: %s</p>\n", students[i].interests);
//        fprintf(html_file, "<p>Hobbies: %s</p>\n", students[i].hobbies);
//        fprintf(html_file, "<img src=\"%s\" alt=\"%s\">\n", students[i].image_filename, students[i].name);
//    }
//
//    fprintf(html_file, "</body>\n</html>\n");
//    fclose(html_file);
//    printf("HTML portfolio created: portfolio.html\n");
//}
//
//int main() {
//    struct Student students[MAX_STUDENTS];
//    int num_students = read_students(students);
//    if (num_students > 0) {
//        generate_html(students, num_students);
//    }
//    return 0;
//}
#pragma endregion

#pragma region Convertion_Test
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <wchar.h>
//#include <locale.h>
//#include <io.h>
//#include <fcntl.h>
//#include <string.h>
//
//int main() {
//    _setmode(_fileno(stdout), _O_U8TEXT);
//    _setmode(_fileno(stdin), _O_U8TEXT);
//    setlocale(LC_ALL, "en_US.UTF-8"); // Set locale to the current environment
//
//    const char data[]  = { 0xE1, 0xBB, 0x87 };
//    
//    mbstate_t state = { 0 };
//
//    const char* ptr = data;
//    wchar_t conv;
//    size_t sum = mbrtowc(&conv, ptr, sizeof(data), &state);
//    if (sum == (size_t)-1) {
//        printf("Conversion error.\n");
//        return 1;
//    }
//    else if (sum == (size_t)-2) {
//        printf("Incomplete sequence.\n");
//        return 1;
//    }
//    else if (sum == 0) {
//        printf("No character was converted.\n");
//        return 1;
//    }
//    wprintf(L"%lc\n", conv);
//
//
//    return 0;
//}
#pragma endregion

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
#include <io.h>
#include <fcntl.h>
#include "Student.h"

void convertUTF8(const char* utf8_data, wchar_t* wchar_string); // function to convert bytes read from csv file into wchar_t array

void makeStudentInfo(Student** &students, wchar_t* info, size_t& studentNumber); // function to make student list from the csv file

void modifyStr(wchar_t* line); // function to make comma-separate value into semicolon-separate value for better reading

void separateHobby(wchar_t* hobby, size_t& numOfHobby, Student*& student); // function separates hobby

void copyFile(const char* sourceFilePath, const char* destinationFilePath); // function copies file to specific folder

void copyFolder(const char* src_path, const char* dest_path); // function copies folder

void generatePortfolio(Student** students, const char folderPath[], const int config[]); // generate all profile pages

char* wchar_to_byte(wchar_t src[]); // turn wchar_t into byte by utf8 encode

wchar_t* takeTextInsideQuotation(const wchar_t* text); // take text inside "" mark read in csv file

void makePortfolioOnChosenStudent(char demand[], Student**& students, const char folderPath[], const int config[]); // function takes in student ids and only generate portfolio page for those students  

void makePortfolio(Student* student, const char folderPath[], const int config[]); // "Make portfolio page with the provided student."

char* readByteFromCSVFile(const char folderPath[]); // read all byte in csv file (skip the BOM if presented)

void configField(char field[], int config[]); // decide which field to display on the portfolio page

wchar_t printChoices(); // print choices of the menu and return the choice


int main() {
    // set the language and encoding method
    int result1 = _setmode(_fileno(stdout), _O_U8TEXT);
    int result2 = _setmode(_fileno(stdin), _O_U8TEXT);
    setlocale(LC_ALL, "en_US.UTF-8");

    wchar_t dataFile[512]; // address of the csv file

    wprintf(L"Enter address of csv file: ");           //  
    fgetws(dataFile, (int)sizeof(dataFile), stdin);    //   get the address of the csv file
    dataFile[wcscspn(dataFile, L"\n")] = L'\0';        // 

    char* raw_data = readByteFromCSVFile(wchar_to_byte(dataFile)); // read data from csv file as raw bytes

    size_t num_wide_chars = strlen((const char*)raw_data); // string which stores unicode data 
    wchar_t* unicode_string = (wchar_t*)malloc((num_wide_chars + 1) * sizeof(wchar_t));
    if (!unicode_string) {
        return NULL;
    }

    convertUTF8(raw_data, unicode_string); // convert raw bytes into unicode string

    size_t numberOfStudent = 10;                                                    //    
    Student** students = (Student**)malloc(numberOfStudent * sizeof(Student*));     //  initialize Student array to store 
    if (students == NULL) return 1;                                                 //  students' infomation
                                                                                    //
    for (size_t i = 0; i < numberOfStudent; i++) {                                  //
        students[i] = nullptr;                                                      //
    }                                                                               //

    makeStudentInfo(students, unicode_string, numberOfStudent);     // parse data from unicode string into Student array

    wchar_t folderPath[256];                                        // 
    wprintf(L"Enter folder address to contain html files: ");       // get the address to store html, css and images files
    fgetws(folderPath, (int)sizeof(folderPath), stdin);             // 
    folderPath[wcscspn(folderPath, L"\n")] = L'\0';                 // 

    char destCSSFilePath[256];                               //
    strcpy(destCSSFilePath, wchar_to_byte(folderPath));      //
    strcat(destCSSFilePath, "/Personal.css");                //  copy css file
    copyFile("Personal.css", destCSSFilePath);               // 

    char destImageFolderPath[256];                                     //
    strcpy(destImageFolderPath, wchar_to_byte(folderPath));            //  copy images folder
    strcat(destImageFolderPath, "\\Images");                            //
    copyFolder("Images", destImageFolderPath);                         //

    int config[8] = { 0 };

    //menu section
    while (true) {
        system("cls");
        wprintf(L"This is a brief look at student information stored in the CSV file:\n");
        printStudentList(students);

        wchar_t choice = printChoices();

        if (choice == L'1') {
            system("cls");
            wprintf(L"Please enter the student IDs for which you would like to generate portfolio pages: ");

            wchar_t ids[512];
            fgetws(ids, 512, stdin);
            while (ids[0] == L'\n') {
                fgetws(ids, 512, stdin);
            }
            ids[wcscspn(ids, L"\n")] = L'\0';

            makePortfolioOnChosenStudent(wchar_to_byte(ids), students, wchar_to_byte(folderPath), config);

            wprintf(L"1. Come back to menu || Press Q to quit program: ");
            wchar_t subChoice;
            subChoice = fgetwc(stdin);
            while (subChoice == L'\n') {
                subChoice = fgetwc(stdin);
            }

            if (subChoice == L'1') {
                system("cls");
                continue;
            }
            else {
                break;
            }
        }
        if (choice == L'2') {
            system("cls");
            generatePortfolio(students, wchar_to_byte(folderPath), config);

            wprintf(L"1. Come back to menu || Press Q to quit program: ");
            wchar_t subChoice;
            subChoice = fgetwc(stdin);
            while (subChoice == L'\n') {
                subChoice = fgetwc(stdin);
            }

            if (subChoice == L'1') {
                system("cls");
                continue;
            }
            else {
                break;
            }
        }
        if (choice == L'3') {
            system("cls");
            wprintf(L"Choose which field you want to display on the page\n");
            wprintf(L"1. Name\n");
            wprintf(L"2. Student's ID\n");
            wprintf(L"3. Year\n");
            wprintf(L"4. Faculty\n");
            wprintf(L"5. Date of birth\n");
            wprintf(L"6. Hobby\n");
            wprintf(L"7. Student description\n");
            wprintf(L"Enter the number of field which you want to display: ");

            wchar_t fields[512];
            fgetws(fields, 512, stdin);
            while (fields[0] == L'\n') {
                fgetws(fields, 512, stdin);
            }
            fields[wcscspn(fields, L"\n")] = L'\0';

            configField(wchar_to_byte(fields), config);

            wprintf(L"1. Come back to menu || Press Q to quit program: ");
            wchar_t subChoice;
            subChoice = fgetwc(stdin);
            while (subChoice == L'\n') {
                subChoice = fgetwc(stdin);
            }

            if (subChoice == L'1') {
                system("cls");
                continue;
            }
            else {
                break;
            }
        }
        else {
            break;
        }
    }

    free(unicode_string);
    free(raw_data);
    return 0;
}

wchar_t printChoices(){
    wprintf(L"1. Choose students to make portfolio pages.\n");
    wprintf(L"2. Generate a portfolio page for all students.\n");
    wprintf(L"3. Choose which field to display on the profile page.\n");
    wprintf(L"Press Q to quit program.\n\n");
    wprintf(L"Enter the number of your choice: ");
    wchar_t choice;
    choice = fgetwc(stdin);
    while (choice == L'\n') {
        choice = fgetwc(stdin);
    }
    return choice;
}

char* readByteFromCSVFile(const char filePath[]) {
    FILE* file = fopen(filePath, "rb");
    if (!file) {
        perror("Error opening file");
        return NULL;
    }

    // find file size
    fseek(file, 0, SEEK_END);
    long long file_size = ftell(file);
    rewind(file);

    // Read the raw bytes
    char* raw_data = (char*)malloc(file_size);
    if (!raw_data) {
        return NULL;
    }

    fread(raw_data, sizeof(char), file_size, file);
    fclose(file);

    // Check for BOM (UTF-8 BOM is 0xEF 0xBB 0xBF)
    if (file_size >= 3 && raw_data[0] == 0xEF && raw_data[1] == 0xBB && raw_data[2] == 0xBF) {
        memmove(raw_data, raw_data + 3, file_size - 3);
        file_size -= 3;
    }
    return raw_data;
}

void convertUTF8(const char* utf8_data, wchar_t* wchar_string) {
    // Start processing after the BOM mark if present
    size_t start_index = 0;
    if ((utf8_data[0] & 0xEF) == 0xEF && (utf8_data[1] & 0xBB) == 0xBB && (utf8_data[2] & 0xBF) == 0xBF) {
        start_index = 3;
    }

    size_t utf8_len = strlen(utf8_data);
    size_t wchar_index = 0;

    for (size_t i = start_index; i < utf8_len;) {
        // Determine the length of the current UTF-8 character
        size_t char_len;
        if ((utf8_data[i] & 0x80) == 0x00) { // Begins with 0, length is 1
            char_len = 1;
        }
        else if ((utf8_data[i] & 0xE0) == 0xC0) { // Begins with 110, length is 2
            char_len = 2;
        }
        else if ((utf8_data[i] & 0xF0) == 0xE0) { // Begins with 1110, length is 3
            char_len = 3;
        }
        else if ((utf8_data[i] & 0xF8) == 0xF0) { // Begins with 11110, length is 4
            char_len = 4;
        }
        else { // Invalid
            wchar_string[wchar_index++] = L'?';
            i++; // Skip one byte
            continue;
        }

        // Convert valid UTF-8 character to wchar_t
        mbstate_t state = { 0 };
        wchar_t wchar;
        size_t converted = mbrtowc(&wchar, &utf8_data[i], char_len, &state);
    
        // check if conversion isn't successful
        if (converted == (size_t) - 1 || converted == (size_t) - 2) {
            wchar_string[wchar_index++] = L'?';
            i++; // Skip one byte
        }
        else { // increase position if successful conversion
            wchar_string[wchar_index++] = wchar;
            i += char_len;
        }
    }
    wchar_string[wchar_index] = L'\0';
}

void modifyStr(wchar_t* line) {
    size_t len = wcslen(line);
    for (int i = 0; i < len; i++) {
        if (line[i] == L',' && line[i + 1] != L' ') {
            line[i] = L';';
        }
    }
}

wchar_t* takeTextInsideQuotation(const wchar_t* text) {
    const wchar_t* firstQuote = wcschr(text, L'"');
    if (firstQuote == NULL) return NULL;

    const wchar_t* lastQuote = wcsrchr(text, L'"');
    if (lastQuote == NULL || lastQuote == firstQuote) {
        //can't find closing mark or find only opening mark
        return NULL;
    }

    // Calculate the length of the text inside the quotation marks
    size_t length = lastQuote - firstQuote - 1;
    if (length == 0) return NULL;

    // Allocate memory for the extracted text (+1 for null terminator)
    wchar_t* extractedText = (wchar_t*)malloc((length + 1) * sizeof(wchar_t));
    if (extractedText == NULL) return NULL;

    wcsncpy(extractedText, firstQuote + 1, length);
    extractedText[length] = L'\0';

    return extractedText;
}

void separateHobby(wchar_t* hobby, size_t& numOfHobby, Student*& student) {

    size_t len = wcslen(hobby);

    wchar_t* tok = wcstok(hobby, L";", NULL);

    while (tok != NULL) {
        wchar_t* tmp = takeTextInsideQuotation(tok);

        if (tmp != NULL) {
            wcscpy(student->hobby[numOfHobby].name, tmp);
        }
        else {
            wcscpy(student->hobby[numOfHobby].name, tok);
        }
        tok = wcstok(NULL, L";", NULL);
        numOfHobby++;
    }
}

void makeStudentInfo(Student** &students, wchar_t* info, size_t& studentNumber) {
    wchar_t line[1100];
    wchar_t* p = info;

    // separate each line from the data
    while (*p != L'?') {
        size_t i = 0;
        while (*p != L'\n' && *p != L'\0' && *p != L'?') {
            line[i++] = *p++;
        }
        line[i] = L'\0';

        modifyStr(line); // turn comma-separate values into semicolon-separate values

        Student * newStudent = new Student;

        wchar_t id[10], name[30], faculty[30], dob[15], image[20], description[1000], hobby[1000];
        int year;

        int numOfParse = swscanf(line, L"%[^;];%[^;];%[^;];%d;%[^;];%[^;];%999[^;];%999[^\n]", 
                                id, name, faculty, &year, dob, image, description, hobby);
    
        id[wcslen(id)] = L'\0';
        name[wcslen(name)] = L'\0';
        faculty[wcslen(faculty)] = L'\0';
        dob[wcslen(dob)] = L'\0';
        image[wcslen(image)] = L'\0';
        description[wcslen(description)] = L'\0';
        hobby[wcslen(hobby)] = L'\0';

        wcscpy(newStudent->id,id);
        wcscpy(newStudent->name,name);
        wcscpy(newStudent->faculty,faculty);
        newStudent->year = year;
        wcscpy(newStudent->dob, dob);
        wcscpy(newStudent->image, image);

        wchar_t * tmp = takeTextInsideQuotation(description);
        if (tmp == NULL) {
            wcscpy(newStudent->description, description);
        }
        else {
            wcscpy(newStudent->description, tmp);
        }

        newStudent->numberOfHobby = 0;
        separateHobby(hobby, newStudent->numberOfHobby, newStudent);

        addStudent(students, studentNumber, newStudent);

        if (*p == L'\n' || *p == '?') {
            p++;
        }
    }
}

void copyFile(const char* sourceFilePath, const char* destinationFilePath) {
    FILE* sourceFile = fopen(sourceFilePath, "rb");
    FILE* destinationFile = fopen(destinationFilePath, "wb");

    if (sourceFile != NULL && destinationFile != NULL) {
        // Copy contents of source file to destination file
        char buffer[1024];
        size_t bytesRead;
        while ((bytesRead = fread(buffer, 1, sizeof(buffer), sourceFile)) > 0) {
            fwrite(buffer, 1, bytesRead, destinationFile);
        }
        wprintf(L"File copied successfully.\n");
    }
    else {
        fprintf(stderr, "Error: Unable to copy file.\n");
    }

    if (sourceFile != NULL) {
        fclose(sourceFile);
    }
    if (destinationFile != NULL) {
        fclose(destinationFile);
    }
}

void copyFolder(const char* src_path, const char* dest_path) {
    char command1[1024];
    snprintf(command1, sizeof(command1), "mkdir %s", dest_path);

    char command2[1024];
    snprintf(command2, sizeof(command2), "xcopy %s %s /E /H", src_path, dest_path);

    system(command1);
    system(command2);
}

char* wchar_to_byte(wchar_t src[]) {
    size_t wideStringLength = wcslen(src);

    size_t bufferSize = (wideStringLength + 1) * 4; 
    char* multibyteString = (char*)malloc(bufferSize);

    if (multibyteString != NULL) {
        size_t bytesConverted = wcstombs(multibyteString, src, bufferSize);
        if (bytesConverted != (size_t)-1) {
            return multibyteString;
        }
        else {
            free(multibyteString);
            return NULL;
        }
    }
    else {
        return NULL;
    }
}

void makePortfolio(Student* student, const char folderPath[], const int config[]) {
    char* id = wchar_to_byte(student->id);
    char fileName[256];
    strcpy(fileName, folderPath);
    strcat(fileName, "/");
    strcat(fileName, id);
    strcat(fileName, ".html");

    bool personalInfo = false;
    bool personalHobby = false;
    bool personalDescription = false;

    for (int i = 1; i <= 7; i++) {
        if (config[i] && i >= 1 && i <= 5) {
            personalInfo = true;
        }
        if (config[i] && i == 6) {
            personalHobby = true;
        }
        if (config[i] && i == 7) {
            personalDescription = true;
        }
    }

    FILE* outputFile = fopen(fileName, "w");
    if (outputFile != NULL) {
        fprintf(outputFile, "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Transitional//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd\">\n");
        fprintf(outputFile, "<html xmlns=\"http://www.w3.org/1999/xhtml\">\n");
        fprintf(outputFile, "    <head>\n");
        fprintf(outputFile, "        <meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\" />\n");
        fprintf(outputFile, "        <link rel=\"stylesheet\" type=\"text/css\" href=\"Personal.css\" />\n");
        fprintf(outputFile, "        <title>HCMUS - %s</title>\n", wchar_to_byte(student->name));
        fprintf(outputFile, "    </head>\n");
        fprintf(outputFile, "    <body>\n");
        fprintf(outputFile, "        <div class=\"Layout_container\">\n");
        fprintf(outputFile, "            <!-- Begin Layout MainContents Region -->\n");
        fprintf(outputFile, "            <div class=\"Layout_Banner\">\n");
        fprintf(outputFile, "                <div><img id=\"logo\" src=\"Images/logo.png\"/></div>\n");
        wchar_t schoolName[] = L"TRƯỜNG ĐẠI HỌC KHOA HỌC TỰ NHIÊN";
        fprintf(outputFile, "                <div class=\"Header_Title\">%s</div>\n", wchar_to_byte(schoolName));
        fprintf(outputFile, "            </div>\n");
        fprintf(outputFile, "            <div class=\"Layout_MainContents\">\n");
        fprintf(outputFile, "                <!-- Begin Below Banner Region -->\n");
        fprintf(outputFile, "                <div class=\"Personal_Main_Information\">\n");
        fprintf(outputFile, "                    <div class=\"Personal_Location\">\n");
        fprintf(outputFile, "                        <div class = \"Personal_FullName\">%s - %s</div>\n", wchar_to_byte(student->name), id);
        fprintf(outputFile, "                        <div class = \"Personal_Department\">%s</div>\n", wchar_to_byte(student->faculty));
        fprintf(outputFile, "                    </div>\n");
        fprintf(outputFile, "                    <div class=\"Personal_HinhcanhanKhung\">\n");
        fprintf(outputFile, "                        <img src=\"Images/%s\" class=\"Personal_Hinhcanhan\" />\n", wchar_to_byte(student->image));
        fprintf(outputFile, "                    </div>\n");
        fprintf(outputFile, "                </div>\n");
        fprintf(outputFile, "                <!-- End Below Banner Region -->\n");
        fprintf(outputFile, "                <!-- Begin MainContents Region -->\n");
        fprintf(outputFile, "                <div class=\"MainContain\">\n");
        fprintf(outputFile, "                    <!-- Begin Top Region -->\n");
        fprintf(outputFile, "                    <div class=\"MainContain_Top\">\n");
        
        if (personalInfo) {
            wchar_t info[] = L"Thông tin cá nhân";
            fprintf(outputFile, "                        <div class=\"InfoGroup\">%s</div>\n", wchar_to_byte(info));
            fprintf(outputFile, "                        <div>\n");
            fprintf(outputFile, "                            <ul class=\"TextInList\">\n");
            if (config[1]) {
                wchar_t fullName[] = L"Họ và tên";
                fprintf(outputFile, "                                <li>%s: %s</li>\n", wchar_to_byte(fullName), wchar_to_byte(student->name));
            }
            if (config[2]) {
                fprintf(outputFile, "                                <li>MSSV: %s</li>\n", id);
            }
            if (config[3]) {
                wchar_t year[] = L"Khóa";
                fprintf(outputFile, "                                <li>%s %d</li>\n", wchar_to_byte(year), student->year);
            }
            if (config[4]) {
                wchar_t facul[] = L"Sinh viên khoa";
                fprintf(outputFile, "                                <li>%s %s</li>\n", wchar_to_byte(facul), wchar_to_byte(student->faculty));
            }
            if (config[5]) {
                wchar_t DOB[] = L"Ngày sinh";
                fprintf(outputFile, "                                <li>%s: %s</li>\n", wchar_to_byte(DOB), wchar_to_byte(student->dob));
                fprintf(outputFile, "                            </ul>\n");
                fprintf(outputFile, "                        </div>\n");
            }
        }

        if (personalHobby) {
            wchar_t hobb[] = L"Sở thích";
            fprintf(outputFile, "                        <div class=\"InfoGroup\">%s</div>\n", wchar_to_byte(hobb));
            fprintf(outputFile, "                        <div>\n");
            fprintf(outputFile, "                            <ul class=\"TextInList\">\n");
            for (int i = 0; i < student->numberOfHobby; ++i) {
                fprintf(outputFile, "                                <li>%s</li>\n", wchar_to_byte(student->hobby[i].name));
            }
            fprintf(outputFile, "                            </ul>\n");
            fprintf(outputFile, "                        </div>\n");
        }

        if (personalDescription) {
            wchar_t descript[] = L"Mô tả";
            fprintf(outputFile, "                        <div class=\"InfoGroup\">%s</div>\n", wchar_to_byte(descript));
            fprintf(outputFile, "                        <div>\n");
            fprintf(outputFile, "                            <ul class=\"TextInList\">\n");
            fprintf(outputFile, "                               <li>%s</li>\n", wchar_to_byte(student->description));
            fprintf(outputFile, "                            </ul>\n");
            fprintf(outputFile, "                        </div>\n");
        }

        fprintf(outputFile, "                    </div>\n");
        fprintf(outputFile, "                </div>\n");
        fprintf(outputFile, "            </div>\n");
        fprintf(outputFile, "            <!-- Begin Layout Footer -->\n");
        fprintf(outputFile, "            <div class=\"Layout_Footer\">\n");
        fprintf(outputFile, "                <div class=\"divCopyright\">\n");
        fprintf(outputFile, "                    <br />\n");
        fprintf(outputFile, "                    <br />\n");
        fprintf(outputFile, "                    @2024</br>\n");
        wchar_t project[] = L"Đồ án giữ kỳ";
        fprintf(outputFile, "                    %s</br>\n", wchar_to_byte(project));
        wchar_t subject[] = L"Kỹ thuật lập trình";
        fprintf(outputFile, "                    %s</br>\n", wchar_to_byte(subject));
        fprintf(outputFile, "                    TH2024</br>\n");
        wchar_t name[] = L"Nguyễn Tấn Hưng";
        fprintf(outputFile, "                    22120125 - %s</br>\n", wchar_to_byte(name));
        fprintf(outputFile, "                </div>\n");
        fprintf(outputFile, "            </div>\n");
        fprintf(outputFile, "            <!-- End Layout Footer -->\n");
        fprintf(outputFile, "        </div>\n");
        fprintf(outputFile, "    </body>\n");
        fprintf(outputFile, "</html>\n");
        fclose(outputFile);
        wprintf(L"HTML portfolio page for student %ls generated successfully.\n", student->id);
        free(id);
    }
    else {
        fprintf(stderr, "Unable to open file for student %s.html\n", id);
    }

}

void makePortfolioOnChosenStudent(char demand[], Student**& students, const char folderPath[], const int config[]) {
    int numberOfStudent = 0;
    Student** tmp = students;
    while (*tmp != NULL) {
        numberOfStudent++;
        tmp++;
    }

    char** idList = (char**)malloc(numberOfStudent * sizeof(char*));
    if (idList == NULL) return;
    for (int i = 0; i < numberOfStudent; i++) {
        idList[i] = (char*)malloc(20 * sizeof(char));
    }

    size_t index = 0;

    char* tok = strtok(demand, " ,");
    while (tok != NULL) {
        strcpy(idList[index], tok);
        idList[index][strlen(idList[index])] = '\0';
        tok = strtok(NULL, " ,");
        index++;
    }

    for (size_t i = 0; i < index; i++) {
        for(size_t j = 0; j < numberOfStudent; j++) {
            if (strcmp(wchar_to_byte((students[j]->id)), idList[i]) == 0) {
                makePortfolio(students[j], folderPath, config);
                break;
            }
        }
    }
    for (int i = 0; i < numberOfStudent; i++) {
        free(idList[i]);
    }
    free(idList);
}

void generatePortfolio(Student** students, const char folderPath[], const int config[]) {
    Student** currentStudent = students;

    while (*currentStudent != NULL) {
        makePortfolio(*currentStudent, folderPath, config);
        currentStudent++;
    }
}

void configField(char field[], int config[]) {
    char* tok = strtok(field, " ,");
    while (tok != NULL) {
        int choice = atoi(tok);
        config[choice] = 1;
        tok = strtok(NULL, ", ");
    }
}

#include <stdio.h>

typedef struct student
{
    char name[15];
    char number[11];
    int marks[4];
} Student;

void print_student(Student students[])
{
    double average_grade = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < sizeof(4); j++)
            average_grade += students->marks[j];
        average_grade = average_grade / (4);
        printf("The student name is %s, mobile number: %s, with an average grade of: %f\n", students[i].name, students[i].number, average_grade);
    }
}

int main()
{
    // Just an example below for testing purposes, hence an initialized structure.
    Student students[5] = {
        {"Aaron", "07565672773", {0, 1, 0, 5}}, {"Lucifier", "07285647593", {91, 71, 69, 48}}, {"Donkey", "07864956274", {51, 85, 3, 31}}, {"Leo", "07063758426", {40, 51, 90, 15}}, "Xion", "07648592647", {90, 91, 80, 95}};

    print_student(students);
    return 0;
}
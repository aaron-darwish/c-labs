#include <stdio.h>

double average(int std_num, int i, double std_grades[std_num][i])
{
    double average_grade = 0;
    for (i = 0; i < 4; i++)
    {
        average_grade += std_grades[std_num][i];
    }
    return (average_grade / 4);
}

int main()
{
    double std_grades[3][4] = {{7.7, 6.8, 8.6, 7.3},
                               {9.6, 8.7, 8.9, 7.8},
                               {7.0, 9.0, 8.6, 8.1}};
    double average_grade_value = 0.0;
    for (int std_num = 0; std_num < 3; std_num++)
    {
        average_grade_value = average(std_num, 0, std_grades);
        printf("Grades for student %d are: %f, %f, %f, %f\nStudent average = %f\n", std_num, std_grades[std_num][0], std_grades[std_num][1], std_grades[std_num][2], std_grades[std_num][3], average_grade_value);
    }
    return 0;
}
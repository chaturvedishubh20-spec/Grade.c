#include<stdio.h>
int main() {
    int subjects, i;
    float marks, total = 0, average;
    char grade;

    printf("Enter the number of subjects: ");
    scanf("%d", &subjects);

    for(i = 1; i <= subjects; i++) {
        printf("Enter marks for subject %d (out of 100): ", i);
        scanf("%f", &marks);
        total += marks;
    }
    average = total / subjects;
 
    if(average >= 80)
        grade = 'A';
    else if(average >= 70)
        grade = 'B';
    else if(average >= 60)
        grade = 'C';
    else if(average >= 50)
        grade = 'D';
    else if(average >= 40)
        grade = 'E';
    else 
        grade = 'F';
    printf("\nTotal Marks: %.2f\n", total);
    printf("Average Percentage: %.2f%%\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}

// Write a function that receives marks received by a student in 3
//subjects and returns the average and percentage of these
//marks. Call this function from main( ) and print the results in
//main( ).

#include <stdio.h>
void calculate(int marks1, int marks2, int marks3, float *average, float *percentage) {
    int total_marks = marks1 + marks2 + marks3;
    *average = total_marks / 3.0;
    *percentage = (total_marks / 300.0) * 100; // Assuming each subject is out of 100
}

int main() {
    int marks1, marks2, marks3;
    float average, percentage;

    printf("Enter marks for subject 1: ");
    scanf("%d", &marks1);
    printf("Enter marks for subject 2: ");
    scanf("%d", &marks2);
    printf("Enter marks for subject 3: ");
    scanf("%d", &marks3);

    calculate(marks1, marks2, marks3, &average, &percentage);

    printf("Average Marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
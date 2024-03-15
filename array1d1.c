#include <stdio.h>
 
// 1. Write a program to accept marks of five subjects, calculate its total and average.





int main() {
    int marks[5], total = 0;
    float average;

    printf("Enter marks of five subjects:\n");

    // Accepting marks for each subject
    for (int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        // Adding marks to total
        total += marks[i];
    }

    // Calculating average
    average = (float)total / 5.0;

    // Displaying total and average
    printf("Total marks: %d\n", total);
    printf("Average marks: %.2f\n", average);

    return 0;
}












































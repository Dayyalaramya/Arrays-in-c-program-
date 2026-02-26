#include <stdio.h>

int main() {
    int marks[5];   // Array declaration
    int i, sum = 0;
    float average;

    // Taking input
    printf("Enter 5 student marks:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }

    // Calculating sum
    for(i = 0; i < 5; i++) {
        sum = sum + marks[i];
    }

    average = sum / 5.0;

    // Printing output
    printf("\nEntered Marks:\n");
    for(i = 0; i < 5; i++) {
        printf("Marks[%d] = %d\n", i, marks[i]);
    }

    printf("\nTotal = %d", sum);
    printf("\nAverage = %.2f", average);

    return 0;
}
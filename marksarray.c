#include <stdio.h>

int main() {
    int marks[5]; 
    int totalMarks = 0;
    int i;

    printf("Enter marks for 5 subjects:\n");

    
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]); 
        totalMarks += marks[i]; 
    }

    printf("\nTotal marks of the student: %d\n", totalMarks);

    return 0;
}
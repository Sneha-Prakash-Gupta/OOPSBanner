#include <stdio.h>

int main() {
    int n,i;
    printf("--- Movie Rating Analyzer ---\n");

    
    printf("How many ratings? ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Error: You must enter a valid positive number.\n");
        return 1; 
    }

    float ratings[n]; 
    float sum = 0.0, average;

    
    printf("Enter each rating (must be between 0 and 10):\n");
    for (i = 0; i < n; i++) {
        printf("Rating %d: ", i + 1);

        if (scanf("%f", &ratings[i]) != 1) {
            printf("Error: Please enter a valid number.\n");
            return 1; 
        }

        
        if (ratings[i] < 0.0 || ratings[i] > 10.0) {
            printf("Error: Rating %.1f is out of range (0–10).\n", ratings[i]);
            return 1; 
        }

        sum += ratings[i];
    }

    
    average = sum / n;

    
    printf("\nAverage Rating: %.1f -> ", average);
    if (average >= 8.0) {
        printf("Hit\n");
    } else if (average >= 5.0) {
        printf("Average\n");
    } else {
        printf("Flop\n");
    }

   
    printf("\n--- Summary ---\n");
    printf("Total number of ratings: %d\n", n);
    printf("Sum of ratings: %.1f\n", sum);
    printf("Average rating: %.1f\n", average);
    printf("Classification: ");
    if (average >= 8.0) {
        printf("Hit\n");
    } else if (average >= 5.0) {
        printf("Average\n");
    } else {
        printf("Flop\n");
    }

    printf("--------------------------\n");

    return 0; 
}
#include <stdio.h>
#include <stdlib.h>

int **createMultiplicationTable(int n, int m) {
    if (n <= 0 || m <= 0) {
        printf("Invalid dimensions\n");
        return NULL;
    }

    // Allocate memory for the table (array of pointers)
    int **table = (int **)malloc(n * sizeof(int *));
    if (table == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }

    // Allocate memory for each row of the table (arrays of integers)
    for (int i = 0; i < n; i++) {
        table[i] = (int *)malloc(m * sizeof(int));
        if (table[i] == NULL) {
            printf("Memory allocation failed\n");

            // Free the previously allocated memory
            for (int j = 0; j < i; j++) {
                free(table[j]);
            }
            free(table);

            return NULL;
        }
    }

    // Fill in the table with multiplication values
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            table[i][j] = (i + 1) * (j + 1);
        }
    }

    return table;
}

// Function to print the multiplication table
void printMultiplicationTable(int **table, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%3d ", table[i][j]);
        }
        printf("\n");
    }
}

// Function to free the memory allocated for the multiplication table
void freeMultiplicationTable(int **table, int n) {
    for (int i = 0; i < n; i++) {
        free(table[i]);
    }
    free(table);
}

int main() {
    int n = 5;  // Number of rows
    int m = 5;  // Number of columns

    int **table = createMultiplicationTable(n, m);

    if (table != NULL) {
        printf("Multiplication Table:\n");
        printMultiplicationTable(table, n, m);

        // Don't forget to free the dynamically allocated memory
        freeMultiplicationTable(table, n);
    }

    return 0;
}

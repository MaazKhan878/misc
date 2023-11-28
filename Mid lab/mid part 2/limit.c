#include<stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0;  // Not a prime number
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // Not a prime number
        }
    }
    return 1;  // Prime number
}

int main() {
    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    // Find the next prime number
    while (1) {
        number++;
        if (is_prime(number)) {
            printf("The next prime number is %d\n", number);
            break;
        }
    }

    return 0;
}

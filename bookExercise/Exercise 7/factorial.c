#include<stdio.h>
int main(){
    long int factorial=1 ,n;
    printf("Enter a pasitive integer:");
    scanf("%ld",&n);
    for(int i = 1 ;i <= n; i++){
        factorial=factorial*i;
    }
    printf("Factorial of %ld: %ld\n",n,factorial);
    return 0;
    
}
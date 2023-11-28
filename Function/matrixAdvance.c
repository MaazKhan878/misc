#include<stdio.h>
#include"matrix.c"
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    matrix(number);
    return 0;
}
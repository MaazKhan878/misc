#include<stdio.h>
int fibonacci(int num){
    if(num == 1){
        return 1;
    }
    if(num == 0){
        return 0;
    }
    return fibonacci(num - 1) + fibonacci(num - 2);
}
int main(){
    int num;
    printf("ENTER THE TO FIND THE FIBONACCI SERIES: ");
    scanf("%d",&num);
    printf("In fibonacci series of %d position as %d\n",num,fibonacci(num));
    return 0;
}
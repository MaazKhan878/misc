#include<stdio.h>
int sum(int num){
    if(num == 1){
        return 1;
    }
    return num + sum(num - 1);
}
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Sum = %d",sum(num));
    return 0;
}
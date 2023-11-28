#include<stdio.h>
void loop(){
    int number = 10;
    for(int i = 1; i<=5; i++){
        for(int j = 1; j<=i; j++){
            printf("%d ",number);
            number+=10;
        }
        printf("\n");
    }
    printf("\n\n");
}
void swap(){
    int temp = 0;
    int num1 , num2;
    printf("Enter the First Number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    printf("%d and %d ",num1, num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("number swap to %d and %d\n", num1, num2);
    printf("\n");
}
int main(){
    loop();
    swap();
    return 0;
}
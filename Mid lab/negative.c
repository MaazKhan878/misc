#include<stdio.h>
int main(){
    int number;
    printf("Enter the numbe: ");
    scanf("%d",&number);
    if(number<0){
        printf("Don't be so negative.\n");
    }
    else if(number == 0){
        printf("your have entered zero number.\n");

    }
    else{
        printf("You entered a pasitive number.\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int number;
    printf("ENter the number:");
    scanf("%d",&number);
    for(int i = 0; i<=number; i++){

        for(int j = 0; j<=number;j++){
           printf("(%d,%d)",i,j);
        }
        printf("\n");
    }
}
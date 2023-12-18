#include<stdio.h>
int main(){
    int number;
    int prod = 1;
    printf("Enter the number: ");
    scanf("%d",&number);
    int a[number][10];
    for(int i = 0; i<number; i++){
        for(int j = 0; j<20; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 0; i<number; i++){
        for(int j = 0; j<20; j++){
            prod *= a[i][j];
            printf("The arry as %d ",a[i][j]);
           
        }
    }
    printf("%d",prod);
}

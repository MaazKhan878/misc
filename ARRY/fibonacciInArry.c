#include<stdio.h>
int main(){
    int seriesNumber;
    printf("Enter the number of Series: ");
    scanf("%d",&seriesNumber);
    int fibb[seriesNumber];
    fibb[0] = 0;
    fibb[1] = 1;
    for(int i = 2; i<seriesNumber; i++){
        fibb[i] = fibb[i - 1] + fibb[i - 2];
    }
    for(int i = 0; i<seriesNumber; i++){
        printf("%d ,",fibb[i]);
    }
}
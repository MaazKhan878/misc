#include<stdio.h>
int main(){
    int row = 0;
    int column = 0;
    printf("Enter the rows: ");
    scanf("%d",&row);
    printf("Enter the column: ");
    scanf("%d",&column);
    int num[row][column];
    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            printf("Enter the value to %d, %d : ",i, j);
            scanf("%d",&num[i][j]);
        }
    }
    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            printf("The value present on index %d and %d as %d\n",i,j,num[i][j]);
        }
    }
}
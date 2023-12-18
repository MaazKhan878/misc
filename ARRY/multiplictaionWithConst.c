#include<stdio.h>
void array(int row, int column, int matrix[][column]){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            printf("%d ",matrix[i][j]);
        }
    }
    printf("\n");
}
void prdctMatrix(int row, int column,int matrix[][column], int scalar){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            matrix[i][j] = matrix[i][j] * scalar;
        }
    }
}
int main(){
    printf("Enter the number of row,column: ");
    int row, column, scalar;
    scanf("%d,%d",&row,&column);
    int matrix[row][column];
    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            printf("Enter number to row %d, column %d: ",i , j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Enter the scalar or constant: ");
    scanf("%d",&scalar);
    array(row, column, matrix);
    prdctMatrix(row, column,matrix, scalar);
    array(row, column,matrix);
}
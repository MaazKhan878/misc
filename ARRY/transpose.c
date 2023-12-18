#include<stdio.h>
void arry2D(int row, int colm, int matrix[row][colm]){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<colm; j++){
            printf("%d  ",matrix[i][j]);
        }
        printf("\n");
    }
}
void transpose(int row, int colm, int matrix[row][colm], int result[colm][row]){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<colm; j++){
            result[j][i] = matrix[i][j];
        }
    }
}
int main(){
    int matrix[][3] = {{2,3,4},{5,3,1},{2,3,2},{3,2,2}};
    int result[3][4];
    arry2D(4,3,matrix);
    printf("\n");
    transpose(4,3,matrix,result);
    arry2D(3,4,result);
}
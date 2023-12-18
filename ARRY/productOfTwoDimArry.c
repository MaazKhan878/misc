#include<stdio.h>
int main(){
    int row, colum;
    printf("Enter the number of row and column: ");
    scanf("%d,%d",&row,&colum);
    int tub1[row][colum];
    int tub2[row][colum];
    for(int i = 0; i<row; i++){
        for(int j = 0; j<colum; j++){
            printf("Enter the matrix1 value : ");
            scanf("%d",&tub1[i][j]);
        }
    }
    for(int i = 0; i<row; i++){
        for(int j = 0; j<colum; j++){
            printf("Enter the number of matrix2 value : ");
            scanf("%d",&tub2[i][j]);
        }
    }
    for(int i = 0; i<row; i++){
        for(int j = 0; j<colum; j++){
            printf("The product of %d X %d = %d\n",tub1[i][j],tub2[i][j],tub1[i][j] * tub2[i][j]);
        }
    }
    return 0;

}
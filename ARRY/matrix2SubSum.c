#include<stdio.h>
void printarr(int r, int c, int mat1[r][c], int mat2[r][c]){
    printf("matrix: 1\n");
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matrix: 2\n");
     for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }
}
void sum(int r, int c, int mat1[r][c], int mat2[r][c], int resultmat[r][c]){
    int sum = 0; int sub = 0;
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            resultmat[i][j]=mat1[i][j] + mat2[i][j];
        }
    }
}
void sub(int r, int c, int mat1[r][c], int mat2[r][c], int resultmat[r][c]){
    int sum = 0; int sub = 0;
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            resultmat[i][j]=mat1[i][j] - mat2[i][j];
        }
    }
}
void resultarr(int r, int c, int reArr[r][c]){
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            printf("%d ",reArr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int mat1[][3]={{11,22,33},{44,55,66},{77,88,99}};
    int mat2[][3]={{1,2,3},{4,5,6},{7,8,9}};
    int resultmat[3][3] = {0};
    printarr(3,3,mat1,mat2);
    resultarr(3,3,resultmat);
    printf("\n");
    sum(3,3,mat1,mat2, resultmat);
    printf("Sum Of Matrix:\n");
    resultarr(3,3,resultmat); 
    sub(3,3,mat1,mat2, resultmat);  
    printf("The subtraction of Matrix:\n");
     resultarr(3,3,resultmat); 

}
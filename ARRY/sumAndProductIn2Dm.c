#include<stdio.h>
void array(int row, int colm, int matrx[row][colm]){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<colm; j++){
            printf("%d  ", matrx[i][j]);
        }
        printf("\n");
    }
}
void eachRowSum(int row, int colm, int arr[row][colm]){
   
    for(int i = 0; i<row; i++){
         int sum = 0;
        for(int j = 0; j<colm; j++){
            sum+= arr[i][j];
        }
        printf("Sum of %d row as %d\n",i,sum);
    }

}
void productSumArry(int row, int colm, int arr[row][colm]){
    int sum = 0, product = 1;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<colm; j++){
            product *= arr[i][j];
            sum += arr[i][j];
        }
    }
    printf("sum = %d and Product = %d\n",sum,product);
}
void diagonal(int r, int c, int arr[r][c]){
    if(r == c){
        for(int i = 0; i<r; i++){
            for(int j = 0; j<c; j++){
                if(i==j){
                    printf("%d ",arr[i][j]);
                }
                else{
                    printf("%d ",0);
                }
            }
            printf("\n");
        }
    }
    else{
        printf("The rows and colum are not equal\n");
    }
}
void lowerDiagonal(int r, int c, int rr[r][c]){
    if(r == c){
        for(int i = 0; i<r; i++){
            for(int j = 0; j<c; j++){
                if(i>=j){
                    printf("%d ",rr[i][j]);
                }
                else{
                    printf("%d ",0);
                }
            }
            printf("\n");
        }
    }
}
void upperDiagonal(int r, int c, int arr[r][c]){
    if(r == c){
        for(int i = 0; i<r; i++){
            for(int j = 0; j<c; j++){
                if(i<=j){
                    printf("%d ",arr[i][j]);
                }
                else{
                    printf("%d ",0);
                }
            }
            printf("\n");
        }
    }
    else{
        printf("The matrix is not square matrix\n");
    }
    
}

int main(){
    int arr[4][4]={ {1,2,3,4},{5,6,7,8},{2,3,4,4},{5,4,3,1}};
    array(3,4,arr);
    printf("\n");
    productSumArry(3,4,arr);
    printf("\n");
    eachRowSum(3,4,arr);
    diagonal(4,4,arr);
    printf("\n");
    lowerDiagonal(4,4,arr);
    printf("\n");
    upperDiagonal(4,4,arr);
}
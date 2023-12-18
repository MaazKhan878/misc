#include<stdio.h>
void matrixChecker(int r, int c, int mt1[r][c], int mt2[r][c]){
    int checker = 0;
    for(int i = 0; i<r; i++){
        for(int j =0 ; j<c; j++){
            if(mt1[i][j]!=mt2[i][j]){
                checker++;
                break;
            }
        }
    }
    if(checker==0){
        printf("The matrix as identical\n");
    }
    else{
        printf("The matrix as not identical\n");
    }
}
void print2DArr(int r, int c, int mt1[r][c], int mt2[r][c]){
    for(int i = 0; i<r; i++){
        for(int j =0 ; j<c; j++){
          printf("%d ",mt1[i][j]);
        }
        printf("\n");
    }
     printf("\n\n");
     for(int i = 0; i<r; i++){
        for(int j =0 ; j<c; j++){
          printf("%d ",mt2[i][j]);
        }
        printf("\n");
    }

}
void singleArr(int r, int c, int arr[r][c]){
     for(int i = 0; i<r; i++){
        for(int j =0 ; j<c; j++){
          printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
void identityMtCheck(int r, int c, int arr[r][c]){
    int checker = 0;
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            if(i==j){
                if(arr[i][j]!=1){
                    checker++;
                    break;
                }
            }
            else if(i!=j && arr[i][j]!=0){
                checker++;
                break;
            }
        }
    }
    if(checker == 0){
        printf("The matrix as the identity matrix\n");
    }
    else{
        printf("The matrix as not the identity matrix\n");
    }
    
}
void sparasMt(int r, int c, int arr[r][c]){
    int countZero = 0, countNonZero = 0;
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            if(arr[i][j] == 0){
                countZero++;
            }
            else{
                countNonZero++;
            }
        }
    }
    if(countZero>countNonZero){
        printf("The Matrix as sparse Matrix\n");
    }
    else{
        printf("The matrix is not the sparse matrix");
    }
}
void mtRowExchange(int r, int c, int arr[r][c]){
    int rw1, rw2, temp = 0;
    printf("Enter the Row number to exchange from which to which one like (1,2): ");
    scanf("%d,%d",&rw1,&rw2);
    for(int i = 0; i<c; i++){
        temp = arr[rw1][i];
        arr[rw1][i] = arr[rw2][i];
        arr[rw2][i] = temp;
    }

}
int main(){
    // int mt1[][4]={{1,2,3,5},{1,2,3,4}};
    // int mt2[][4]={{1,2,3,4},{1,2,3,4}};
    // print2Darr(2,4,mt1,mt2);
    // matrixChecker(2,4,mt1,mt2);
    int arr[4][4]={{1,4,0,5},{6,1,0,6},{5,0,1,8},{3,4,5,1}};
    // identityMtCheck(3,3,arr);
    // sparasMt(3,3,arr);
    singleArr(4,4,arr);
    mtRowExchange(4,4,arr);
    singleArr(4,4,arr);
}
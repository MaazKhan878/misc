#include<stdio.h>
int sum_array(int rows, int cols, int arr[rows][cols]){
    int i,j,sum=0;
    for(i = 0 ; i< rows; i++){
        for(j = 0; j< cols; j++){
            sum*=arr[i][j];
        }
       
    }
    return sum;
}
int main(){
    int arry[2][3]={{5,6,7},{4,5,6}};
    int totalSum=sum_array(2,3,arry);
    printf("%d",totalSum);
    return 0;
    }

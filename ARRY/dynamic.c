#include<stdio.h>
#include<stdlib.h>
double *forfloat(double arr, int size){
    for(int i = 0; i<size; i++){
        printf("Enter the flaot number: ");
        scanf("%lf",&arr);
    }
}
int main(){
    int n = 10;
    int *array;
    array = (int *) malloc(n * sizeof(int));
    if(array == NULL){
        printf("Memory allocation failed....");
        return 0;
    }
    for(int i = 0; i<n; i++){
        printf("Enter the number: ");
        scanf("%d",&array[i]);
    }
    for(int i = 0; i<n; i++){
        printf("%d ",array[i]);
    }
    int size = 50;
    double *arr = (double *)malloc(size * sizeof(double));
    if(arr == NULL){
        printf("Its failed.....");
    }
    forfloat(arr, size);
    for(int i = 0; i<size; i++){
        printf("%lf ",arr);
    }
    
}
#include<stdio.h>
#include<stdlib.h>
double *generatRandom(int size){
    if(size == 0){
        printf("Invalid size:");
        return NULL;
    }
    double *arr =(double *)malloc(size * sizeof(double));
    if(arr == NULL){
        printf("Memory allocation failed..");
        return NULL;
    }
    for(int i = 0; i<size; i++){
        arr[i] = (double)(rand() % 100);
    }
    return arr;
}
int main(){
    int size = 10;
    double *arr = generatRandom(size);
    if(arr == NULL){
        printf("invalide allocation");
        return 1;
    }
    for(int i = 0; i<size; i++){
        printf("%lf ",arr[i]);
    }
    free(arr);
    return 0;
}
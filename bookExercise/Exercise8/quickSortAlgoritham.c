#include<stdio.h>
void printArr(int* a, int n);
int partition(int a[], int low, int high);
void quickSort(int a[], int low, int high);
int main(){
    int n;
    printf("Enter the number sort:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element:");
    for(int i = 0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printArr(a,n);
    quickSort(a,0,n);
    printArr(a,n);
    return 0;
}
void printArr(int* a, int n){
    for(int i = 0; i<n; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int partition(int a[], int low, int high){
    int i = low + 1;
    int j = high;
    int pivote =a[low];
    int temp;
    do{
        while(a[i]<=pivote){
        i++;
        }
        while(a[j]>pivote){
         j--;
        }
        if(i<j){
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
        }
    }while(i<j);
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}
void quickSort(int a[], int low, int high){
    int partitionIndex; 
    if(low<=high){
        partitionIndex= partition(a,low,high);
        quickSort(a, low, partitionIndex - 1);
        quickSort(a, partitionIndex + 1, high);
    }
}

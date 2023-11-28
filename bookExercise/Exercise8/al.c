#include <stdio.h>
void arry(int* a, int n);
void quickSort(int a[], int low, int high);
int partition(int a[], int low, int high);
int main(){
    int n;
    printf("Enter the number of sort:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the number of element:");
    for(int i = 0; i<n; i++){
       scanf("%d",&a[i]);
    }
    arry(a,n);
    quickSort(a,0,n);
    arry(a,n);
    return 0;
}
void arry(int a[], int n){
  for(int i = 0; i<n; i++){
    printf("%d ",a[i]);
  } 
  printf("\n");
}
int partition(int a[],int low , int high){
    int ref = a[low];
    int i = low + 1;
    int j = high;
    int temp;
    do{
        while(a[i]<=ref){
            i++;
        }
        while(a[j]>ref){
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
    int indexSort;
    if(low<high){
        indexSort = partition(a , low, high);
        quickSort(a, low, indexSort - 1);
        quickSort(a, indexSort + 1, high);
    }
}
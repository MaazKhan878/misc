#include<stdio.h>
int partition(int a[], int low, int high){
    int i = low + 1;
    int j = high;
    int ref = a[low];
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
        }while(i<j);
        
    }while(i<j);
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}
void quickSort(int a[], int low, int high){
    int index;
    if(low<=high){
        index = partition(a , low, high);
        quickSort(a , low, index - 1);
        quickSort(a , index + 1, high);
    }
}
void arry(int* a, int n){
    for(int i = 0; i<n; i++){
        printf("%d, ",a[i]);
    }
    printf("\n");
}
int main(){
     int n;
    printf("Enter the number sort:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element:");
    for(int i = 0; i<n; i++){
        scanf("%d",&a[i]);
    }
    arry(a,n);
    quickSort(a,0,n);
    arry(a,n);
    return 0;
}
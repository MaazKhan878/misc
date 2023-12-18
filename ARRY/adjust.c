#include<stdio.h>
void array(int mt[], int n){
    for(int i = 0; i<n; i++){
        printf("%d  ",mt[i]);
    }
    printf("\n");
}
int partition(int mt[], int low, int high){
    int ref = mt[low];
    int i = low + 1;
    int j = high;
    int temp = 0;
    do{
        while(mt[i]<=ref){
            i++;
        }
        while(mt[j]>ref){
            j--;
        }
        if(i<j){
         temp = mt[i];
         mt[i] = mt[j];
         mt[j] = temp;
        }
    }while(i<j);
    temp = mt[low];
    mt[low] = mt[j];
    mt[j] = temp;
    return j;
}
void sorting(int mt[], int low, int high){
    int index = 0;
    if(low<=high){
        index = partition(mt, low, high);
        sorting(mt, low, index - 1);
        sorting(mt, index + 1, high);
    }
}
void maxToMinSort(int mt[], int n){
    int i = 0;
    int j = n-1;
    int temp = 0;
    while(i<j){
    temp = mt[i];
     mt[i] =mt[j];
     mt[j] = temp;
     i++;
     j--;
    }
}
void inputArray(int mt[], int n){
    for(int i = 0; i<n; i++){
        printf("Store value in sort %d : ",i);
        scanf("%d",&mt[i]);
    }
}
int main(){
    int n;
    printf("Enter the number of Sort to store variable: ");
    scanf("%d",&n);
    int mt[n];
    inputArray(mt, n);
    array(mt, n);
    sorting(mt, 0, n);
    printf("Minimum to Maximum : ");
    array(mt, n );
    maxToMinSort(mt, n);
    printf("Maximum to Minimum : ");
    array(mt , n);

}
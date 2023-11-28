#include<stdio.h>
int max(int a[], int n);
int main(){
    int n;
    printf("Enter the number of sort:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the number of element:");
    for(int i = 0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("Max = %d\n",max(a,n));
}
int max(int a[],int n){
    int max=0;
    for(int i = 0; i<n; i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;

}
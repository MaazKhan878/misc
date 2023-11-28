#include<stdio.h>
int power(int x, int n);
int main(){
    int x,n;
    printf("Enter the number:");
    scanf("%d",&x);
    printf("Enter the power:");
    scanf("%d",&n);
    printf("The Power %d on %d as = %d \n",x,n,power(x,n));
    return 0;
}
int power(int x, int n){
    if(n==0){
        return 1;
    }
    return x * power(x,n-1);
}
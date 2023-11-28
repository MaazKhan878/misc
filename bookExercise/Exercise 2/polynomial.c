#include<stdio.h>
int main(){
    int x, polynomial;
    printf("Enter the number:");
    scanf("%d",&x);
    polynomial=(((3*x - 2)*x-5)*x + 7)*x - 6;
    printf(" the Polynomial of %d = %d\n",x,polynomial);
    return 0;
}
#include<stdio.h>
#include<math.h>
int polynomial(int x);
int main(){
    int x;
    printf("Enter the value of X:");
    scanf("%d",&x);
    printf("The Polynomial of %d as %d\n",x,polynomial(x));
    return 0;
}
int polynomial(int x){
    return ((3 * pow(x,5)) + (5 * pow(x,3)) + (7 * x) - 6);
}
#include<stdio.h>
int fact(int);
int power(int , int);
int main(){
int n;
int x;
printf("Find the factorial:");
scanf("%d",&n);
printf("Enter the Power of number:");
scanf("%d",&x);
printf("The factorial of %d as %d \n",n, fact(n));
printf("Power %d of %d = %d\n",x,n,power(n,x));

return 0;
}
int fact(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n * fact(n-1);
    }
}
int power(int n, int x){
    if(x==0){
        return 1;
    }
    else{
        return n * power(n, x-1);
    }
}
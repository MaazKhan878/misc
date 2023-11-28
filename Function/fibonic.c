#include<stdio.h>
// if fibonacci base case: fibonacci of 0 = 0 and fibonacci of 1 = 1
long int fibonicci(int n);
int main(){
    int n = 1;
    do{
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Fibanocci of %d as %ld\n",n,fibonicci(n));
    }while(n!=0);
    return 0;
}
long int fibonicci(int n){
    if(n == 0 ){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    
    return fibonicci(n - 1) + fibonicci(n - 2);
}
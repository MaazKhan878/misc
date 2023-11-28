#include<stdio.h>
int digitcount(int n){
    static int count = 0;
    if(n!=0){
        count++;
        digitcount(n/10);
    }
    return count;
}
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    printf("The number of digit in %d as %d\n",number,digitcount(number));
    return 0;
}
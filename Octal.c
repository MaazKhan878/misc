#include<stdio.h>
int main(){
    int number,converter=0,octalNumber,rem=0,i=1;
    printf("Enter the number:");
    scanf("%i",&number);
    while(number>0){
        rem=number%8;
        converter=converter+rem*i;
        number=number/8; 
        i*=10;
    }
    printf("0%d",converter);
return 0;
}
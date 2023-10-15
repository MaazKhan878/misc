#include<stdio.h>
int main(){
    int d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12,sum1,sum2,totalSum,subtract;
    printf("Enter the valide digite upto eleven and separate by spaces:\n");
    scanf("%i%i%i%i%i%i%i%i%i%i%i%i",&d1,&d2,&d3,&d4,&d5,&d6,&d7,&d8,&d9,&d10,&d11,&d12);
    sum1=d1+d3+d5+d7+d9+d11;
    sum2=d2+d4+d6+d8+d10;
    sum1*=3;
    totalSum=sum1+sum2;
    totalSum-=1;
    totalSum%=10;
    subtract=9-totalSum;
    printf("Check digit as %i\n",subtract);
    if(subtract==d12){
     printf("Code as Valid\n");
    }
    else{
        printf("Invalide\n");
    }
    return 0;
   
}
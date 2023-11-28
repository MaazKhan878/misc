#include<stdio.h>
int main(){
int d1,d2, countNumber;
printf("Input Ist second and second number:\n");
scanf("%d%d",&d1,&d2);
int i;
for(int i = 1; i<=8; i++ ){
    printf("Enter the remaining 8 number: ");
    scanf("%d",&countNumber);
    if(countNumber>d1 && countNumber<d2){
      if(countNumber!=d1 && countNumber!=d2){
        printf("the number is between %d and %d so number is show as outPut as %d \n",d1 ,d2, countNumber);
      }
    }


}
return 0;
}
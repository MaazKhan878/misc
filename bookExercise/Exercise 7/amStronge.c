#include<stdio.h>
#include<math.h>
int main(){
    int repeatition, number,sum=0,rem,n;
    printf("Enter the number:");
    scanf("%d",&number);
    printf("Enter the power according digit:");
    scanf("%d",&n);
    for(int i=1; number!=0 ;i++){
        rem=number%10;
        sum+=pow(rem,n);
        number=number/10;
        
    }
 printf("Sum = %d\n",sum);
return 0;
}
#include<stdio.h>
#include<math.h>
int amstrong(int , int);
int main(){
    int number, power;
    int ams;
    printf("Enter the Amstrong Number:");
    scanf("%d",&number);
    printf("Enter the Power according the digite:");
    scanf("%d",&power);
    ams= amstrong(number,power);
    if(ams==number){
        printf("The number as Amstronge Number. and number as %d\n",ams);
    } else{
        printf("Number is not Amstrong number: and the number as %d\n", ams);
    }
}
int amstrong(int number, int power){
    int sum=0,reminder;
    while(number!=0){
        reminder=number%10;
        sum=sum+pow(reminder,power);
        number=number/10;
        printf("Sum %d\n",sum);

    }
    return sum;
    
}
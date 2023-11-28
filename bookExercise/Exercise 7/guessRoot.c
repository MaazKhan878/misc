#include<stdio.h>
#include<math.h>
int main(){
    float number, guess, preNum, curNum, calcuError;
    const float ERROR=0.000000001f;
    printf("Enter the Number and Guess:");
    scanf("%f%f",&number,&guess);
    preNum=guess;
    do{
        curNum=0.5 * (preNum + number/preNum);
        calcuError=curNum-preNum;
        preNum=curNum;

    }while(calcuError>ERROR);
    printf("%0.1f",curNum);
    return 0;
}
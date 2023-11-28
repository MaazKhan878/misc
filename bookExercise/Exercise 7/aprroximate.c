#include<stdio.h>
#include<math.h>
float squreRoot(float num, float gu){
    float current, previous, calculatedError;
    const float ERROR= 0.000000001f;
    previous=gu;
    do{
        current=0.5*(previous+ num/previous);
        calculatedError=fabs(current-previous);
        previous=current;
    }while(calculatedError>ERROR);
    return current;
    
}
int main(){
    float number, guess;
    printf("Enter the number:");
    scanf("%f",&number);
    printf("Enter the guess :");
    scanf("%f",&guess);
    float approximate=squreRoot(number,guess);
    printf("The approximate vale as %f \n",approximate);
    return 0;
}
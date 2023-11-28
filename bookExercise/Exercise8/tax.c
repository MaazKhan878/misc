#include<stdio.h>
float tax(float value);
int main(){
    float value;
    printf("Enter the Income:");
    scanf("%f",&value);
    printf("The tax %0.2f as %0.2f\n",value,tax(value));
    return 0;
}
float tax(float value){
    if(value <= 750){
        return 0.01 * value;
    }
    else if(value > 750 && value <= 2250){
        return 0.02 * value + 7.5;
    }
    else if(value > 2250 && value <= 3750){
        return 0.03 * value + 37.50;
    }
    else if(value > 3750 && value <=5250){
        return 0.04 * value + 82.50;
    }
    else if(value > 5250 && value <=7000){
        return 0.05 * value + 142.50;
    }
    else if(value > 7000){
        return 0.06 * value + 230.0;
    }
}
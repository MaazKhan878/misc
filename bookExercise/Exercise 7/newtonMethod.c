#include<stdio.h>
#include<math.h>
int main(){
    double x, division,current=1, previous=0,average,difference;
    printf("Enter a positive number:");
    scanf("%lf",&x);
    while(1){
        division=x/current;
        average=(current+division)/2;
        current=average;
        difference=fabs(current-previous);
        previous=current;
        if(difference<0.00001){
            printf("Squre root: %lf",current);
            break;
        }

        
    }
    return 0;
}
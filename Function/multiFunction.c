#include<stdio.h>
#include<math.h>
double newtonMethod(double n){
    double division,current=1, previous=0,average,difference,result;
    while(1){
        division=n/current;
        average=(current+division)/2;
        current=average;
        difference=fabs(current-previous);
        previous=current;
        if(difference<0.00001){
          result=current;
            break;
        }

        
    }
 return result;
}
int main(){
    double x,squreRoot;
    printf("Enter the value of x to find squre root of x:");
    scanf("%lf",&x);
    squreRoot=newtonMethod(x);
    printf("Squre root as %lf",squreRoot);

    return 0;
}

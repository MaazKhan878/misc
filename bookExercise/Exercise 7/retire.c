#include<stdio.h>
int main(){
    float ini, inflation, ret,adjInRe,interest, totalInterest,monthC;
    int year,month;
    printf("Enter initial amount:");
    scanf("%f",&ini);
    printf("Enter mothly contribution:");
    scanf("%f",&monthC);
    printf("Enter return rate:");
    scanf("%f",&ret);
    printf("Enter the inflation:");
    scanf("%f",&inflation);
    printf("Enter the year:");
    scanf("%i",&year);
    adjInRe=((1+ret)/(1+inflation))-1;
    month=year*12;
    printf("Month\tintesrest\tbalance\n");
    for(int i = 1; i<=month; i++){
        interest=(adjInRe * ini)/12;
        ini+=(interest+monthC);
        totalInterest+=interest;
        printf("%d\t%f\t%f\n",month,interest, ini);
    }
    printf("Total interset: %f\ntotal nest egg: %f\n",totalInterest,ini);
    return 0;
}
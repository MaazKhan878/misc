#include<stdio.h>
int main(){
    int highBill, mediumBill, lowerBill, lowestBill;
    int dollar, remainHigh, remainMedium, remainLower;
    printf("Enter the Amount in Dollar:");
    scanf("%d",&dollar);
    highBill=dollar/20;
    remainHigh = dollar - highBill * 20;
    mediumBill = remainHigh/10;
    remainMedium = remainHigh - mediumBill * 10;
    lowerBill = remainMedium/5;
    remainLower = remainMedium - lowerBill * 5;
    lowestBill = remainLower /1;
    printf("$ 20 Bills : %d\n",highBill);
    printf("$ 10 Bills : %d\n",mediumBill);
    printf("$ 5  Bills : %d\n",lowerBill);
    printf("$ 1  Bills : %d\n",lowestBill);
    return 0;
}
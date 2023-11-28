#include<stdio.h>
#include<math.h>
#include"myFunc.h"
int main(){
    printf("Enter the redious: ");
    int redius;
    scanf("%d",&redius);
    drawCircle(redius);
    printf("%d\n\n",recursive(redius));
    return 0;
}
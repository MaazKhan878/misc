#include<stdio.h>
int main(){
    float n1,n2,n3,n4,n5,store1=0,store2=0,store3=0,store4=0,store5=0;
    do{
        printf("Enter 1ST value:");
        scanf("%f",&n1);
        printf("Enter the 2nd value:");
        scanf("%f",&n2);
        printf("Enter the 3rd value:");
        scanf("%f",&n3);
        printf("Enter the 4th Value:");
        scanf("%f",&n4);
        printf("Enter the 5th Value:");
        scanf("%f",&n5);
        if(n1==store1 && n2==store2 && n3==store3 && n4==store4 && n5==store5 ){
            n1++;
            n2++;
            n3++;
            n4++;
            n5++;
        }
        printf("current iputed value as %f,%f,%f,%f,%f\n",n1,n2,n3,n4,n5);
        store1=n1;
        store2=n2;
        store3=n3;
        store4=n4;
        store5=n5;
    }while(1);
    return 0;
}
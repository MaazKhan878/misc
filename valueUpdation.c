#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter the Ist number:");
    scanf("%i",&n1);
    printf("Enter the second value:");
    scanf("%d",&n2);
    printf("Intial differnce between Ist number and second number %i - %i = %i\n",n1,n2,n1-n2);
    if(n1>n2){
        for(int i=1;i<=n1;i++){
            n2=i;
        }
        printf("The value of second number %i becom equal the Ist number %i\n",n2,n1);
    }
    else{
        for(int i=1;i<=n2;i++){
            n1=i;
        }
         printf("The value of Ist number %i becom equal the second number %i\n",n1,n2);

    }
    return 0;
}
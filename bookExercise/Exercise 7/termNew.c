#include<stdio.h>
int main(){
    float preN=2,preDe=1,cuNu=3,cuDe=2,geNu,geDe,sum;
    sum=(preN/preDe)+(cuNu/cuDe);
    printf("%f/%f , %f/%f\n",preN,preDe,cuNu,cuDe);
    for(int i = 3 ; i<=20; i++ ){
        geNu=preN + cuNu;
        geDe=preDe + cuDe;
        printf("%0.1f/%0.1f\n",geNu,geDe);
        sum=sum + (geNu/geDe);
        preN=cuNu;
        preDe=cuDe;
        cuNu=geNu;
        cuDe=geNu;
    }
    printf("Sum %f\n",sum);
    return 0;

}
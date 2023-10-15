#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
  do{
    float balance, checkBlance,credit, debit;
    int cmd;
    printf("ENTER 0=Delete previous balance, 1=credit, 2=debit, 3=check current balance, 4=exite program:");
    scanf("%i",&cmd);
    switch(cmd){
        case 0: balance=0.0f;
        break;
        case 1:{
            printf("Enter the credit:");
            scanf("%f",&credit);
            balance+=credit;
        }
        break;
        case 2:{
            printf("Enter the debit:");
            scanf("%f",&debit);
            balance-=debit;
        }break;
        case 3:{
            printf("The cureent Balance as %f\n",balance);
        }
        break;
        case 4:{
            return 0;
        }
        break;
        default:{
            printf("ENTER 0=Delete previous balamce, 1=credit, 2=debit, 3=check current balance, 4=to exite program\n:");
        }
        break;
    }



  }while(1);
  return 0;
  

}
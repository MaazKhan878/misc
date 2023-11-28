#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<winbase.h>
void menu();
int main(){
    int pincode = 1348;
    int enterPin = 0;
    int lockedTime = 10000;
    int endTime = 0;
    int wrongPin = 0;
    int recorder;
    printf("|||||||||||||||| WELCOME TO OUR BANK ||||||||||||||||||||\n");
    while(1){
    if(time(NULL) < endTime){
        system("cls");
        printf(" Your account locked for a Time being Please try later after %d second\n",recorder/1000);
        Sleep(1000);
        continue;
    }
    printf("Enter your pin: ");
    scanf("%d",&enterPin);
    if(enterPin == pincode){
       menu();
    }
    else{
        printf("You enter the wrong Pin please enter the right Pin\n");
        wrongPin++;
        if(wrongPin>=3){
            printf("You enter wrong Pin max time. Your account blocked for %d seconds.\n",lockedTime/1000);
            endTime = time(NULL) + lockedTime/1000;
            recorder = lockedTime;
            lockedTime *= 2;
            wrongPin = 0;
        }

    }
 
    }
}
void menu(){
    int number;
    int balance = 0;
    int deposit;
    int draw;
    do{
        printf("=======SELECT ONE OF THE OPTION=======\n");
        printf("|1|\t|Check Balance\n");
        printf("|2|\t|Deposite Money\n");
        printf("|3|\t|Withdraw MOney\n");
        printf("|0|\t|To exite|\n");
        printf("==========================\n");
        scanf("%d",&number);
        switch(number){
            case 1:
            printf("Your current balance as $ %d\n",balance);
            break;
            case 2:
            printf("Enter the Amount to deposite:\n");
            scanf("%d",&deposit);
            balance +=deposit;
            break;
            case 3:
            printf("Enter the Amount to with draw :");
            scanf("%d",&draw);
            if(draw>balance){
                printf("You can not Withdraw that amount of money because your current amount lesser than Withdraw amount.\n");
                } 
            else{
                balance = balance - draw;  
                }
            break;
            case 0:
            exit(0);
            default:
            printf("Please Enter accurate choice...\n");
            break;
        }
    }while(1);
}
#include<stdio.h>
void numberPrint(); // part 1
void starNumPrint(); // part 2
void printNum(); // part 3
void Print4(); // part 4
void printDecrease(); // part 5
void starDec(); // part 6
void printNumInc(); // part 7
void incByNum(); // part 8
void incByLoop(); // part 9
void incBy5(); // part 10
void paramidNum(); // part 11
void paramidStar(); // part 12
void diamondShap(); // part 13
void hallowParamid(); // part 14
void numberPerDe(); // part 15
void numberPeraDe(); // part 16
void numberPrintInp(); // part 17
void tablePrint(); // part 18
int main(){
        numberPrint();
        starNumPrint();
        Print4();
        printDecrease();
        starDec();
        printNumInc();
        incByNum();
        incByLoop();
        incBy5();
        paramidNum();
        paramidStar();
        diamondShap();
        hallowParamid();
        numberPerDe();
        numberPeraDe();
        numberPrintInp();
        tablePrint();

}
void numberPrint(){
    for(int i = 1; i<=4; i++){
        printf("%d ",i);
    }
    printf("\n");
    for(int i = 1; i<=4; i++){
        printf("* ");
    }
    printf("\n");
    for(int i = 1; i<=4; i++){
        printf("* ");
    }
    printf("\n");
    for(int i = 1; i<=4; i++){
        printf("%d ",i);
    }
    printf("\n\n");
}
void starNumPrint(){
    for(int i = 1; i<=4; i++){
        for(int j = 1; j<=4; j++){
            if(j==1 || j==4){
                printf("%d ",j);
            }
            else{
            printf("* ");
            }
        }
        printf("\n");
    }
}
void printNum(){
    for(int i = 1; i<=4; i++){
        for(int j = 1; j<=4; j++){
            if(j == 1 || j == 4){
                printf("%d ",j);
            } 
            else{
                printf(" ");
            }           
        }
        printf("\n");
    }
     printf("\n\n");
}
void Print4(){
    for(int i = 1 ; i<=4; i++){
        for(int j = 1; j<=4; j++){
            if(j == 4){
                printf(" %d",j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
     printf("\n\n");
}
void printDecrease(){
    int numberdec = 4;
    for(int i =1; i<=4; i++){
        for(int j = 1; j<=numberdec; j++){
         printf("%d ",j);
        }
        numberdec--;
        printf("\n");
    }
     printf("\n\n");
}
void starDec(){
    int starDec = 4;
    for(int i = 1; i<=4; i++){
        for(int j = 1; j<=starDec; j++){
            printf("* ");
        }
        starDec--;
        printf("\n");
    }
     printf("\n\n");
}
void printNumInc(){
    int starNum = 1;
    for(int i = 1; i<=4; i++){
        for(int j = 1; j<=starNum; j++){
            printf("%d ",j);
        }
        starNum+=2;
        printf("\n");
    }
     printf("\n\n");
}
void incByNum(){
    int star = 0;
    for(int i = 1; i<=4; i++){
        for(int j = 1; j<=i; j++){
            star+=1;
            printf("%d ",star);
  
        }

        printf("\n");
    }
    printf("\n\n");
}
void incByLoop(){
    int incremental = 0;
    for(int i = 1; i<=4; i++){
        incremental = i;
        for(int j = 1; j<=i; j++){
            printf("%d ",incremental);
            incremental +=i;
        }
        incremental = 0;
        printf("\n");
    }
    printf("\n\n");
}
void incBy5(){
    int numinc = 5;
    for(int i = 1; i<=4; i++){
        for(int j = 1; j<4; j++){
            printf("%d ",numinc);
            numinc += 5;
        }
        printf("\n");
    }
    printf("\n\n");
}
void paramidNum(){
    int spacePrint = 0;
    int numPrint = 7;
    for(int line = 1; line<=4; line++){
        for(int space = 1; space<=spacePrint; space++){
            printf("  ");
        }
        for(int num = 1; num<=numPrint; num++){
            printf("%d ",num);
        }
        spacePrint++;
        numPrint-=2;
        printf("\n");
    }
    printf("\n\n");
}
void paramidStar(){
    int spacePrint = 0;
    int numPrint = 7;
    for(int line = 1; line<=4; line++){
        for(int space = 1; space<=spacePrint; space++){
            printf("  ");
        }
        for(int num = 1; num<=numPrint; num++){
            printf("* ");
        }
        spacePrint++;
        numPrint-=2;
        printf("\n");
    }
    printf("\n\n");
}
void diamondShap(){
    int spacePrint = 4;
    int starPrint = 1;
    for(int line = 1; line<=7; line++){
        for(int space = 1; space<=spacePrint; space++){
            printf("  ");
        }
        for(int star = 1; star<=starPrint; star++){
            printf("* ");
        }
        if(line<=7/2){
            spacePrint--;
            starPrint+=2;
        }
        else{
            spacePrint++;
            starPrint-=2;
        }
        printf("\n");
    }
    printf("\n\n");
}
void hallowParamid(){
    int spacePrint = 1;
    int spacePrint1 = 7;
    int starP = 1;
    for(int line = 1; line<=7; line++){
        printf("* ");
    }
    printf("\n");
    for(int printer = 1; printer<=3; printer++){
        if(printer == 3){
            starP = 0;
        }
        for(int space = 1; space<=spacePrint; space++){
         printf("  ");
        }
          printf("*");
        for(int space1 = 1; space1<=spacePrint1; space1++ ){
          printf(" ");
        }
        for(int star = 1; star<=starP; star++){
         printf("* ");
        }
        spacePrint++;
        spacePrint1-=4;
        printf("\n");
    }
    printf("\n\n");   
}
void numberPerDe(){
    int printNumber = 7;
    int spacePrint = 0;
    for(int line = 1; line <= 7; line++){
        for(int space = 1; space<=spacePrint; space++){
            printf(" ");
        }
        for(int number = 1; number<=printNumber; number++){
            printf("%d",number);
        }
        if(line<=7/2){
            printNumber-=2;
            spacePrint++;
        }
        else{
            printNumber+=2;
            spacePrint--;
        }
        printf("\n");
    }
    printf("\n\n");
}
void numberPeraDe(){
    int numberPrint = 4;
    int spacePrint = 5;
    for(int number = 1; number<=5; number++){  
       printf("%d ",number);
    }
    printf("\n");
    for(int line = 1; line<=4; line++){
        printf("1");
        for(int space = 1; space<=spacePrint; space++){
        printf(" ");
        }
        if(numberPrint>=2){
          printf("%d",numberPrint);
        }
        spacePrint-=2;
        numberPrint--;
        printf("\n");
    
    }
    printf("\n\n");
}
void numberPrintInp(){
    int num;
    printf("Enter the numbe: ");
    scanf("%d",&num);
    if(num%2==0){
        num++;
    }
    int printnum = num;
    int printspace = 0;
    for(int line = 1; line <= num; line++){
        for(int space = 1; space<=printspace; space++){
            printf("  ");
        }
        for(int number = 1; number<=printnum; number++){
            printf("%d ",number);
        }
        if(line<=num/2){
            printnum-=2;
            printspace++;
        }
        else{
            printnum+=2;
            printspace--;
        }
        printf("\n");
    }
    printf("\n");
}
void tablePrint(){
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    for(int row = 1; row<=number; row++){
        printf("\t%d",row);
    }
    for(int column = 1; column<=number; column++){
        printf("\n%d",column);
        for(int multiple = 1; multiple<=number; multiple++){
            printf("\t%d",column*multiple);
        }
    }
    printf("\n\n");
}
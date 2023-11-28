#include<stdio.h>
#include<math.h>
void drawCircle(int redious){
    char c;
    printf("Print Hallow Circle press 'Y' print Non - Hallow Circle press 'N'..");
    scanf(" %c",&c);
    if(c=='Y' || c == 'y'){
       for(int y = -redious ; y<=redious; y++){
        for(int x = -redious; x<=redious; x++){
            float distance = sqrt(pow(y,2) + pow(x,2));
            if(distance>redious - 0.5 && distance<redious + 0.5){
                printf("#");
            }
            else{
                printf(".");
            }
        }
        printf("\n");

    }
    }
    else{
         for(int y = -redious ; y<=redious; y++){
        for(int x = -redious; x<=redious; x++){
            float distance = sqrt(pow(y,2) + pow(x,2));
            if(distance>redious - 0.5 && distance<redious + 0.5){
                printf("#");
            }
            else{
                printf("*");
            }
        }
        printf("\n");

    }
    }
    printf("\n\n");
}
void star(int n){
    if(n%2 == 0){
        n++;
    }
    int starPrint = n;
    int starPrint1 = 1;
    for(int line = 1; line<=n; line++){
        for(int star = 1; star<=starPrint; star++){
            printf("*");
        }
        printf(" ");
        for(int star1 = 1; star1<=starPrint1; star1++){
            printf("*");
        }
        printf(" ");
        for(int star = 1; star<=starPrint; star++){
            printf("*");
        }
        if(line<=n/2){
            starPrint--;
            starPrint1+=2;
        }else{
            starPrint++;
            starPrint1-=2;
        }
        printf("\n");
    }
}
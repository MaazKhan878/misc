ttt#include<stdio.h>
#include<ctype.h>
int main(){
    char choice;
    printf("Enter the Tell phone number:");
    choice=getchar();
    while(choice!='\n'){
        if(toupper(choice)>='A' && toupper(choice)<='C'){
            printf("2");
        }
        else if(toupper(choice)>='D' && toupper(choice)<='F'){
            printf("3");
        }
        else if(toupper(choice)>='G' && toupper(choice)<='I'){
            printf("4");
        }
        else if(toupper(choice)>='J' && toupper(choice)<='L'){
            printf("5");
        }
        else if(toupper(choice)>='M' && toupper(choice)<='O'){
            printf("6");
        }
        else if(toupper(choice)>='P' && toupper(choice)<='S'){
            printf("7");
        }
        else if(toupper(choice)>='T' && toupper(choice)<='V'){
            printf("8");
        }
        else if(toupper(choice)>='W' && toupper(choice)<='Z'){
            printf("9");
        }
        else if(choice=='0'){
            printf("0");

        }else if(choice=='1'){
            printf("1");
        }else if(choice=='2'){
            printf("2");
        }else if(choice=='3'){
            printf("3");
        }else if(choice=='4'){
            printf("4");
        }else if(choice=='5'){
            printf("5");
        }else if(choice=='6'){
            printf("6");
        }else if(choice=='7'){
            printf("7");
        }else if(choice=='8'){
            printf("8");
        }else if(choice=='9'){
            printf("9");
        }
        choice=getchar();
    }
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<winbase.h>
int main(){
    int houre = 0, minute = 0, second = 0;
    while(1){
        system("cls");
        printf("%d:%d:%d\n",houre,minute,second);
        fflush(stdout);
        second++;
        if(second == 60){
            second = 0;
            minute++;
        }
        else if(minute == 60){
            minute = 0;
            houre++; 
        }
        else if(houre == 24){
            minute = 0;
            second = 0;
            houre = 0;
        }
        Sleep(1000);

    }
}
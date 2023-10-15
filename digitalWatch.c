#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
int main(){
    int second=0,minute=0,hour=0;

    while(1){
        
        system("clear");
        printf("%2d:%2d:%2d",hour,minute,second);
        fflush(stdout);
        second++;
        if(second==60){
            minute++;
            second=0;
        }
        else if(minute==60){
            hour++;
            minute=0;
        }
        else if(hour==24){
            second=0;
            minute=0;
            hour=0;
        }
        sleep(1);
    }
    return 0;
}
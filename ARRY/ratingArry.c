#include<stdio.h>
int main(){
int starRater;
printf("Enter the number of people who give rate: ");
scanf("%d",&starRater);
int rat[11] = {0};
int star;
for(int i = 1; i<=starRater; i++){
    printf("Give rate to show between 1 and 10: ");
    scanf("%d",&star);
    rat[star]++;
}
int max = 0;
int starByPeople = 0;
for(int i = 0; i<11; i++){
    if(max<rat[i]){
        max = rat[i];
        starByPeople = i;
    }
}
printf("The Max People are %d who Give %d Stars.\n",max,starByPeople);
return 0;
}
#include<stdio.h>
// int neutralNum(int num){
//     int result = 1;
//     if(num == 1){
//         return 0;
//     }
//     result += neutralNum(num - 1);
//     printf("neutral number are : %d\n",result);
//     return result;
// }
int numStart(int n){
    if(n<=50){
        printf("%d ",n);
        numStart(n + 1);
    }
}
int main(){
    int num = 1;
    // neutralNum(num); if number start from upper side like from 50.
    numStart(num); // if number strat from lower side like 1 to 50
}
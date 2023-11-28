#include <stdio.h>
#include <stdlib.h>
/*int main(int argc, char **argv){
    if(argc==3){
        int sum;
        sum=atoi(argv[1])+atoi(argv[2]);
        printf("Sum of = %d",sum);
    }else{
        printf("You enter wrong number of output\n");
    }
    return 0;
}
*/
int main(int argc, char **argv){
    if(argc==3){
        float division;
        division=atof(argv[1])/atof(argv[2]);
        printf("Division = %f",division);
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define TOTALMARKS 600
struct student{
    int rollNo;
    float average;
    int nuOfStu;
    float marks[10];
    char name[][10];
};
int main(){
    struct student class;
    class.nuOfStu;
    printf("Enter the Number of Student: ");
    scanf("%d",&class.nuOfStu);
    class.name[class.nuOfStu];
    class.marks[class.nuOfStu];
   
    for(int i = 1; i<=class.nuOfStu; i++){
        while(getchar()!='\n');
        printf("Enter the student Name\n");
        fgets(class.name[i],sizeof(class.name[i]),stdin);
        if(class.name[i][strlen(class.name[i] - 1)] == '\n'){
            class.name[i][strlen(class.name[i] - 1) == '\0'];
        }
        printf("Enter the  marks of %s : ",class.name[i]);
        scanf("%f",&class.marks[i]);
    }
    printf("Roll.Number\tName\tMarks\tPercentage\n");
    for(int i = 1; i<=class.nuOfStu; i++){
        class.average = class.marks[i]/TOTALMARKS * 100;
     printf("%d        |\t%s  |\t%0.2f|\t%0.2f|\n",i,class.name[i],class.marks[i],class.average);

    }
    return 0;
}
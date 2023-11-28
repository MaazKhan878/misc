#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    // Declearing required variables 
int range;
float marks;
float perc, total_marks;
// Get required value from user 
printf("Enter the number of students : ");
scanf("%d",&range);
printf("Enter the total marks : ");
scanf("%f",&total_marks);
float arry[range];
char name[range][100000];
// Calcualte for all student percentage 
 for(int i = 1; i <= range; i++)
    {   
     // Get student name and obtain marks 
     while(getchar()!='\n');
     printf("Enter the name of student : ");
     fgets(name[i],sizeof(name[i]),stdin);
          if(name[i][strlen(name[i] - 1)] == '\n'){
             if(name[i][strlen(name[i] - 1)] == '\0');
        }
     printf("Enter the Marks of the Student %s:",name[i]);
     scanf("%f",&arry[i]);
   
    }
    printf("RESULT:\n");
    printf("|ROLL NO|NAME              \t|TOTAL MARKS \t| STUDENT MARKS  \t|PERCENTAGE         \n");
    for(int j = 1; j<=range; j++){
      perc = (arry[j]/total_marks) * 100.0f;
      printf("|%3d     |%s            \t|%4.2f       \t|%5.2f           \t|%2.2f\n",j,name[j],total_marks,arry[j],perc);  
    } 

    return 0;
}
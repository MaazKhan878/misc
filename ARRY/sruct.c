#include<stdio.h>
#include<string.h>
struct result 
{
    int num;
    float marks;
};
int main(){
    struct result re;
    float averag;
    printf("Enter the number of student :");
    scanf("%d",&re.num);
    float a[re.num];
    char name[re.num][1000];
    for(int i = 1; i<=re.num; i++){
        while(getchar()!='\n');
        printf("Enter the Roll No %d student name:\n",i);
        scanf("%s",&name[i]);
        printf("Enter the marks of student %s:\n",&name[i]);
        scanf("%f",&a[i]);
        if(name[i][strlen(name[i])-1]=='\n'){
            name[i][strlen(name[i] - 1)]=='\0';
        }
    }
    printf("RESULT:\n");
    for(int j = 1; j<=re.num; j++){
        averag = (a[j]/600.0f) * 100.0f;
        printf("Student Name as : %s\nMarks as:%f out of 600\nAverage as %0.2f\n",name[j],a[j],averag);
       
    }
    return 0;
}


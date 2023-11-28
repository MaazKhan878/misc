#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int n;
    float averag, total;
    printf("How many number of Student:");
    scanf("%d",&n);
    char name[n][10000];
    float a[n];
    for(int i = 1; i<=n; i++){
        while (getchar() != '\n');
        printf("Enter the Roll NO %d Student Name:\n",i);
        scanf("%s",name[i]);
        printf("Enter the Marks of Student:");
        scanf("%f",&a[i]);
        if (name[i][strlen(name[i]) - 1] == '\n') {
            name[i][strlen(name[i]) - 1] = '\0';
        }
    }
    printf("RESULT:\n");
    for(int j = 1; j<=n; j++){
        averag = (a[j]/600.0f) * 100.0f;
        printf("Student Name as : %s\nMarks as:%f out of 600\nAverage as %0.2f\n",name[j],a[j],averag);
       
    }
    return 0;
}
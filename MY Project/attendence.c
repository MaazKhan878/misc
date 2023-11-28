#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the number of student in the class:");
    scanf("%d",&n);
    printf("Entery the name of all Student in Class one by one:\n");
    char name[n][100000];
    while(getchar()!='\n');
    for(int i = 1; i<=n; i++){
     fgets(name[i],sizeof(name[i]),stdin);
     if(name[i][strlen(name[i])-1] == '\n') {
         name[i][strlen(name[i])-1] = '\0'; 
        }
    }
    int m;
    int p[n];
    int ab[n];
    int VALUE = 1;
    char c;
    for(int c = 0; c<=n; c++){
        p[c] = 0;
        ab[c] = 0;
    }
    printf("Enter the days in the Current Month:");
    scanf("%d",&m);
    int j, k, q;
    for(j = 1; j<=m; j++){
     for(k = 1; k<=n ; k++){
         printf("Student %s as :\n",name[k]);
         scanf(" %c",&c);
         if(c=='p' || c=='P'){
             p[k]+= 1;
            
            }
         else
            {
    
             ab[k]+=1;
             
            }
        }
        
    }
    float avg; 
    int total;
    printf("Student Monthly Attendance:\n");
    printf("|Class Roll NO\t|Name                 \t|Present   \t|Absence   \t|Percentage\n");
    for(int o = 1; o<=n; o++){
       total = p[o];
       avg = ((float)(total)/m) * 100;
       printf("|%d           \t|%15s   \t|%3d       \t|%3d         \t|%4.2f\n",o,name[o],p[o],ab[o],avg);
    }

}
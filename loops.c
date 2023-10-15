#include<stdio.h>
/*int main(){
    for(int i=1;i<=128;i*=2){

    printf("%d",i);
    
    }
    return 0;
}*/
/*int main(){
    float balance=1,store=0;
    while(balance>0){
        printf("Enter the number:");
        scanf("%f",&balance);
        if(balance>store){
            store=balance;
        }
    }
    printf("Largest one as %f",store);
}*/
/*#include<stdio.h>
int main(){
    int i,a,b,GCD;
    printf("Enter two integer:");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            GCD=i;
        }
    }
    printf("GCD=%d",GCD);
}*/
/*int main(){
    int a,b,gcd;
    printf("Enter the fraction:");
    scanf("%d/%d",&a,&b);
    for(int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
           
        }
        a/=gcd;
        b/=gcd;
    }
    printf("The lowest fraction as=%d/%d\n",a,b);
    }
    return 0;*/
    /*int main(){
        int a,convert,placeholder;
        printf("Enter the value:");
        scanf("%d",&a);
        while(1){
        convert=a%10;
        placeholder=convert;
        a=a/10;
        printf("%d",placeholder);
        if(a==0){break;}
        
        }
        return 0;
    }*/

    /*#include<stdio.h>
    int main(){
        int startDay,daysMonth;
        printf("Enter the number of days in Month:");
        scanf("%d",&daysMonth);
        printf("Enter the starting day of week:");
        scanf("%d",&startDay);
        printf("Mon\tTeus\tWed\tThurs\tFri\tSaut\tSun\n");
        for(int i=1;i<=startDay;i++){
            printf("\t");
        }
        for(int j=1;j<=daysMonth;j++){
            printf("%d\t",j);
            if((startDay+j)%7==0){
                printf("\n");
            }
        }
        return 0;
    }*/

    /*int main(){
        double e=0,n,store=1;
        printf("Enter the value:");
        scanf("%lf",&n);
        for(int i=1;i<=n;i++){
            e+=store;
            store/=i;
            
        
        }
        printf("%lf",e);
    }*/
    int main(){
        int count=0,n=0;
        printf("Enter the number:");
        scanf("%d",&n);
        for(int i=2;i<n;i++){
            if(n%i==0){
                count++;
                break;
            }
        }
        if(count==0){
            printf("%d prime",n);
        }
        else{
            printf("%d not prime",n);
            
        }
        return 0;
    }
        






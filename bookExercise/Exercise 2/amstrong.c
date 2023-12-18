#include <stdio.h>
#include <math.h>

int ArmstrongNum(int* num);

int main()
{
    int num;

    printf("enter any number : ");
    scanf("%d", &num);
    
     if(ArmstrongNum(&num))
       {
         printf("%d is armstrong number\n", num);
       }
       else 
       printf("%d is not an armstrong number\n", num);

    
    return 0;

}

int ArmstrongNum(int* num)
{
    int remainder, sum = 0, digit = 0;
    int org_num = *num; 

    while( org_num != 0)
    {
        // remainder = org_num % 10;
       digit++;
        org_num = org_num / 10;
         
       
    }

    printf("%d digit\n", digit);
    printf("%d\n", org_num);

    while( org_num != 0 )
        {
            remainder = org_num % 10;
            sum = sum + pow( remainder, digit);
            org_num = org_num / 10;
        }
        printf("sum = %d\n",sum);

    return sum == *num;
      
}
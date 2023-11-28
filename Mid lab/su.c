#include <stdio.h>
int main()
 {
    int i, num, num1, num2;

    printf("Enter 10 numbers : \n");
    for ( i = 1; i <= 10; i++)
	 {
	 	printf("enter the number : ",i);
       scanf("%d", &num);
	    
       if (i == 1 )
          {
          	int temp1 = num;
          	printf("first number is : %d\n", temp1);
		  }
		  
		 if (i == 2 )
          {
          	int temp2 = num;
          	printf("second number is : %d\n", temp2);
		  }
       
       int max, min;
       
       if ( num1 > num2 )
          {
          	max = num1;
		  }
		  else 
		  {
		  	max = num2;
		  }
		if ( num1 < num2 )
		   {
		   	 min = num1;
		   }
		   else 
		   {
		   	  min = num2;
		   }
       
	    if ( num > min && num <max )
		    { 
		        if ( i >= 3 && i <= 10 )
		    	printf(" %d is in the range of two inputed numbers\n", num);
			 }
}
			  
	return 0;

}
#include<stdio.h>
int main(){
    float loan, interestRate, monthly, _1stMonthLoan, _2ndMonthLoan, _3rdMonthLoan;
    float interest;
    printf("Enter the Loan:");
    scanf("%f",&loan);
    printf("Enter the interest rate:");
    scanf("%f",&interestRate);
    printf("Enter the Monthly payment:");
    scanf("%f",&monthly);
    interest = (interestRate/100)/12;
    _1stMonthLoan = ((loan - monthly) + (loan * interest));
    _2ndMonthLoan = ((_1stMonthLoan - monthly) + (_1stMonthLoan * interest));
    _3rdMonthLoan = ((_2ndMonthLoan - monthly) + (_2ndMonthLoan * interest));
    printf("Balance remaining after the first payment : $ %0.2f\n", _1stMonthLoan);
    printf("Blanace remaining after the second payment: $ %0.2f\n", _2ndMonthLoan);
    printf("Balance remaining atfer the 3rd payment   : $ %0.2f\n", _3rdMonthLoan);
    return 0;
}
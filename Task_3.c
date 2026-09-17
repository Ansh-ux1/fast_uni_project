#include <stdio.h>
int main (){
    int A, B,Quotient,Reminder;
    printf("Enter Number One =");
    scanf("%d",&A);
    printf("Enter Number Two =");
    scanf("%d",&B);
    Quotient = A/B;
    Reminder = A%B;
    printf("\nQuotient of two numbers is %d",Quotient);
    printf("\nReminder of two numbers is %d",Reminder);

    return 0;
}


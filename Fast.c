#include <stdio.h>
int main()
{
    printf("Welcome to Gym ! \nCheck Whether The slot is available or Not !");
    // 1 - Membership Eligibility
    int age;
    printf("\nPleae Enter Your Age = ");
    scanf("%d", &age);
    // Conditions
    if (age >= 16)
    {
        printf("Member-Ship is Allowed");
        int plan;
        printf("\nEnter (1-3) for Select Plan = ");
        scanf("%d", &plan);
        // 2- Using Switch Key (Membership Plan Selection)
        switch (plan)
        {
        case 1:
            printf("1 = basic Plan\n");
            break;
        case 2:
            printf("2 = Premium Plan\n");
            break;
        case 3:
            printf("3 = VIP Plan\n");
            break;
        }
        int month;
        printf("Enter the months of register you are  = ");
        scanf("%d", &month);
        if (month >= 6)
        {
            printf("\nYou got 10%% discout ");
        }
        else
            printf("Normal price");

        // 4-  Personal Trainer Option
        char R;
        printf("\nDo you want trainer (Y/N) = ");
        scanf(" %c", &R);
        if (R == 'Y' || R == 'y')
        {
            printf("\nYou have to pay another charges !");
        }

        // 6 - Trainer Rating
        int rate;
        printf("\nPlease Rate us !\n1 = Good !\n2 = Excellent !\n3 = Average ! = ");
        scanf("%d", &rate);
        if (rate == 1 || rate == 2 || rate == 3)
        {
            printf("Thank you for rating us");
        }

        // 7 - Diet Consultation Service
        int diet;
        printf("\nWould You like to Want Diet Plan !\n(Press 1 for Yes or 0 for No) = ");
        scanf("%d", &diet);
        if (diet == 1)
        {
            printf("|Rs : 1000 Extra Charge !|");
        }
        else if (diet == 0)
        {
            printf("No Charges");
        }

        // 8- Monthly Bill
        printf("\n|Per Month Fee is Rs : 2000 And 10%% Tax| ");
        int calculate_bill = month * 2000;
        calculate_bill = calculate_bill + calculate_bill / 10;

        printf("\n(Your Total Bill is Rs : %d)", calculate_bill);

        // 9- Supplement Menu
        int Supply;
        printf("\n|Here is Supplement Menu|\n|1=protein| \n|2=Creatina|\n|3=BCAA| = ");
        scanf("%d", &Supply);
        switch (Supply)
        {
        case 1:
            printf("\nYou Choose Protein !");
            break;
        case 2:
            printf("\nYou Choose  Creatina !");
            break;
        case 3:
            printf("\nYou Choose  BCAA !");
            break;
        default:
            printf("\nInvalid Choise !");
        }
        // 10 Late Payment Penalty
        printf("\nIf you pay after due You Charge additionally Rs: 300");

        // 11 - Corporate Member Handling
        char Employee;
        printf("\nAre Your corporate employee ? ! Press(Y/N) ");
        scanf(" %c", &Employee);
        if (Employee == 'y' || Employee == 'Y')
        {
            printf("\nYou Got 20%% additional Discount !");
            int New_fees;
            New_fees = calculate_bill - calculate_bill / 5;
            printf("\nYour New Fees is %d", New_fees);
        }
        else
        {
            printf("No Discount");
        }

        // 12- Multiple Member Age Check
        printf("\nDo You have Another Members In our GYM !");
        char Dsecion;
        printf("\n(Y/N) = ");
        scanf(" %c", &Dsecion);
        if (Dsecion == 'Y' || Dsecion == 'y')
        {
            printf("Please Enter Their Ages = \n");
            int Ag_1, Ag_2, Ag_3;
            printf("Enter Age 1 =\n");
            scanf("%d", &Ag_1);
            printf("Enter Age 2 =\n");
            scanf("%d", &Ag_2);
            printf("Enter Age 3 =\n");
            scanf("%d", &Ag_3);
            if (Ag_1 >= 16 && Ag_2 >= 16 && Ag_3 >= 16)
            {
                printf("\nGroup Membership is Allowed ! ");
            }
            else
            {
                printf("\nGroup Membership is Denied!");
            }
        }
        else if (Dsecion == 'N' || Dsecion == 'n')
        {
            printf("\nNo Group Members.");
        }
        else
        {
            printf("\nInvalid Input!");
        }

        // 13 - Payment Confirmation
        printf("\nEnter Your Payment Status (Y/N) = ");
        char payment;
        scanf(" %c", &payment);
        if (payment == 'Y' || payment == 'y')
        {
            printf("\n Confirm Membership !");
        }
        else if (payment == 'N' || payment == 'n')
        {
            printf("keep status pending !\n");
        }

        // 14-  Feedback Reward
        printf("\nHow You Rate our Whole System ! \n");
        int last_Rate;
        scanf("%d", &last_Rate);
        if (last_Rate >= 4)
        {
            printf("Cograts You Got Free Protein Shake Voucher !");
        }
        else if (last_Rate < 4)
        {
            printf("Sorry User ! \n|We Will Improve our Service| ");
        }

        printf("\nThanku For Your Given Time");
    }
    else
    {     printf("The Age is not acceptable !\n");
    }

}

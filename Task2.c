#include <stdio.h>
int main()
{
    char City[20];
    char Country[20];
    char Area[20];
    char Grade[20];
    int population;

    printf("Enter your City Name = ");
    scanf("%s", City);

    printf("Enter your Country Name = ");
    scanf("%s", Country);

    printf("Enter your Area Name = ");
    scanf("%s", Area);

    printf("Enter your Grade Name = ");
    scanf("%s", Grade);

    printf("Enter Your Population = ");
    scanf("%d", &population);

    printf("--------------------------");
    printf("\nCity = %s", City);
    printf("Country = %s\n", Country);
    printf("Area = %s\n", Area);
    printf("Grade = %s\n", Grade);
    printf("Population = %d\n", population);

    return 0;

}

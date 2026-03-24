/* Name: EJIET HAGGAI */
/* Student Number: 25/U/BIO/01368/PD */

#include <stdio.h>

int main(void)
{
       float units_consumed, cost_per_unit, total_bill;

        printf("Enter the units consumed:");
        scanf("%f", &units_consumed);

        printf("Enter cost per unit:");
        scanf("%f", &cost_per_unit);

        total_bill = units_consumed * cost_per_unit;


        printf("\nThe total bill is: %.2f UGX\n", total_bill);

    return 0;
}

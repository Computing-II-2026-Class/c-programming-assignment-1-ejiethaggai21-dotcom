/* Name: EJIET HAGGAI */
/* Student Number: 25/U/BIO/01368/PD */

#include <stdio.h>

int main(void)
{
    float amount_to_send,transaction_fee,amount_fee,total_amount_deducted;

       printf("Enter amount to send:");
       scanf("%f", &amount_to_send);

       printf("Enter transaction fee: ");
       scanf("%f", &transaction_fee);

       amount_fee =(transaction_fee/100) * amount_to_send;
       total_amount_deducted = (amount_fee + amount_to_send);

       printf("The fee amount is: %.2f UGX\n" , amount_fee);
       printf("The total amount deducted is: %.2f UGX\n", total_amount_deducted);

    return 0;
}

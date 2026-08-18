/*
Electricity Bill with rates depending on unit usage and surcharge additon in C
            Units Used      Price per unit

Slab 1      0-50            Rs 0.50
Slab 2      50-150          Rs 0.75
Slab 3      151-250         Rs 1.20
Slab 4      above 250       Rs 1.50
*/

#include <stdio.h>
int main()
{
    int units;
    printf("Enter the units consumed\n");
    scanf("%d", &units);

    float bill = 0;
    if (units < 0)
    {
        printf("Invalid units!\n");
        return 0;
    }
    else if (units <= 50)
    {
        int ex_u = units;
        bill = units * 0.50;
        printf("Bill = %d X 0.50 = %.2f\n", ex_u, bill);
    }
    else if (units <= 150)
    {
        int ex_u = units - 50;
        bill = (50 * 0.50) + (ex_u * 0.75);
        printf("Bill = (50 X 0.50)+(%d X 0.75) = %.2f\n", ex_u, bill);
    }
    else if (units <= 250)
    {
        int ex_u = units - 150;
        bill = (50 * 0.50) + (100 * 0.75) + (ex_u * 1.20);
        printf("Bill = (50 X 0.50)+(100 X 0.75)+(%d X 1.20) = %.2f\n", ex_u, bill);
    }
    else if (units > 250)
    {
        int ex_u = units - 250;
        bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + (ex_u * 1.50);
        printf("Bill = (50 X 0.50)+(100 X 0.75)+(100 X 1.20)+(%d X 1.50) = %.2f\n", ex_u, bill);
    }

    float surcharge, final_bill;
    surcharge = (bill * 0.2);
    final_bill = bill + surcharge;

    printf("Surchange(20%%) = %.2f\n", surcharge);
    printf("Final Bill = %.2f\n", final_bill);
    return 0;
}
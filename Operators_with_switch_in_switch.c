#include <stdio.h>
int main()
{
    printf("Enter 1 for Arithmetic Operators\n");
    printf("Enter 2 for Relatonal/Comaparison Operators\n");
    printf("Enter 3 for Logical Operators\n");
    printf("Enter 4 for Assignment Operators\n");
    printf("Enter 5 for Increment / Decrement Operators\n");

    int operator;
    printf("Enter Your Choice of Operators: ");
    scanf("%d", &operator);
    int choice;
    float a, b;

    switch (operator)
    {

    case 1:
        printf("Arithmetic Operators\n");

        printf("Enter 1 for Addition\n");
        printf("Enter 2 for Subtraction\n");
        printf("Enter 3 for Multiplication\n");
        printf("Enter 4 for Division\n");
        printf("Enter 5 for Modulus\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);

        switch (choice)
        {
        case 1:
            printf("Addition = %.2f", a + b);
            break;

        case 2:
            printf("Subtraction = %.2f", a - b);
            break;

        case 3:
            printf("Multiplication = %.2f", a * b);
            break;

        case 4:
            if (b != 0)
                printf("Division = %.2f", a / b);
            else
                printf("Division by zero is not possible");
            break;

        default:
            printf("Invalid choice");
        }
        break;

    case 2:
        printf("Relatonal/Comaparison Operators\n");
        printf("Enter 1 for Equal To (==)\n");
        printf("Enter 2 for Not Equal To (!=)\n");
        printf("Enter 3 for Greater Than (>)\n");
        printf("Enter 4 for Less Than (<)\n");
        printf("Enter 5 for Greater Than or Equal To (>=)\n");
        printf("Enter 6 for Less Than or Equal To (<=)\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        printf("Enter a value: ");
        scanf("%d", &a);

        printf("Enter another value: ");
        scanf("%d", &b);

        switch (choice)
        {
        case 1:
            printf("%d", a == b);
            break;

        case 2:
            printf("%d", a != b);
            break;

        case 3:
            printf("%d", a > b);
            break;

        case 4:
            printf("%d", a < b);
            break;

        case 5:
            printf("%d", a >= b);
            break;

        case 6:
            printf("%d", a <= b);
            break;

        default:
            printf("Invalid choice");
        }
        break;

    case 3:
        printf("Logical Operators\n");
        int choice;
        int a, b;

        printf("Enter 1 for AND (&&)\n");
        printf("Enter 2 for OR (||)\n");
        printf("Enter 3 for NOT (!)\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter a value: ");
            scanf("%d", &a);

            printf("Enter another value: ");
            scanf("%d", &b);
            printf("AND = %d", a && b);
            break;

        case 2:
            printf("Enter a value: ");
            scanf("%d", &a);

            printf("Enter another value: ");
            scanf("%d", &b);
            printf("OR = %d", a || b);
            break;

        case 3:
            printf("Enter a value: ");
            scanf("%d", &a);
            printf("NOT = %d", !a);
            break;

        default:
            printf("Invalid choice");
        }
        break;

    case 4:
        printf("Assignment Operators\n");

        printf("Enter 1 for Assignment (=)\n");
        printf("Enter 2 for Addition Assignment (+=)\n");
        printf("Enter 3 for Subtraction Assignment (-=)\n");
        printf("Enter 4 for Multiplication Assignment (*=)\n");
        printf("Enter 5 for Division Assignment (/=)\n");
        printf("Enter 6 for Modulus Assignment (%%=)\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        printf("Enter a value: ");
        scanf("%d", &a);

        printf("Enter another value: ");
        scanf("%d", &b);

        switch (choice)
        {
        case 1:
            a = b;
            printf("a = %d", a);
            break;

        case 2:
            a += b;
            printf("a = %d", a);
            break;

        case 3:
            a -= b;
            printf("a = %d", a);
            break;

        case 4:
            a *= b;
            printf("a = %d", a);
            break;

        case 5:
            if (b != 0)
            {
                a /= b;
                printf("a = %d", a);
            }
            else
                printf("Division by zero is not possible");
            break;

        case 6:
            if (b != 0)
            {
                a %= b;
                printf("a = %d", a);
            }
            else
                printf("Division by zero is not possible");
            break;

        default:
            printf("Invalid choice");
        }
        break;

    case 5:
        printf("Increment / Decrement Operators\n");
        int c;

        printf("Enter 1 for Post Increment (++)\n");
        printf("Enter 2 for Post Decrement (--)\n");
        printf("Enter 3 for Pre Increment (++)\n");
        printf("Enter 4 for Pre Decrement (--)\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        printf("Enter a value: ");
        scanf("%d", &c);

        switch (choice)
        {
        case 1:
            printf("Before Post Increment = %d", c);
            c++;
            printf("After Post Increment = %d", c);
            break;

        case 2:
            printf("Before Post Decrement = %d", c);
            c--;
            printf("After Post Decrement = %d", c);
            break;
            
        case 3:
            printf("Before Pre Increment = %d", c);
            ++c;
            printf("After Pre Increment = %d", c);
            break;

        case 4:
            printf("Before Pre Decrement = %d", c);
            --c;
            printf("After Pre Decrement = %d", c);
            break;

        default:
            printf("Invalid choice");
        }
        break;

    default:
        printf("Invalid Choice!");
        break;
    }
    return 0;
}
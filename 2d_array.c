#include<stdio.h>
int main()
{
    int i,j,a,b;
    printf("Enter the no. of rows you want: \n");
    scanf("%d", &i);
    printf("Enter the no. of columns you want: \n");
    scanf("%d", &j);

    int array[i][j];

    for(a=0; a<=i-1; a++)
    {
        for(b=0; b<=j-1; b++)
        {
            printf("Enter the value of array[%d][%d]: \n", a+1, b+1);
            scanf("%d", &array[a][b]);
        }
    }

    for(a=0; a<=i-1; a++)
    {
        for(b=0; b<=j-1; b++)
        {
           printf("%d\t",array[a][b]);
        }
        printf("\n");
    }

    return 0;
}
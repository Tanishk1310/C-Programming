#include <stdio.h>
int main(){
    
    int array[10];

    for(int i = 0; i<=9; i++)
    {
        printf("enter the elements of array[%d]\n", i);
        scanf("%d", &array[i]);
    }

    int*ptr = array;

    printf("The first element of the array using pointer is %d\n", *ptr);
    ptr = ptr+2;

    printf("checking the value of the (ptr+2), which is supposed to be the third element of the array %d\n", *ptr);
    
    
    return 0;
}
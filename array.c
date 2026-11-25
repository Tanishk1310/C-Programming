#include <stdio.h>
int main(){
    
    int arr[] = {1,2,3,4};
    int *ptr = arr;

    for(int i = 0; i <= 3; i++)
    {
        printf("The array element of index %d is %d\n", i, *ptr);
        ptr++;
    }
    return 0;
}
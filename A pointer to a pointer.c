/***************************************************************

                	    Author: Eason

***************************************************************/
#include <stdio.h>

int main(void) {
    int p = 10;
    int *ptr1 = &p;
    int **ptr2 = &ptr1;

    printf("The value of p is : %d\n", p);
    printf("The memory address of p is : %p\n\n", &p);

    printf("*ptr1 (The value of ptr1) = %d\n", *ptr1);
    printf("ptr1 (The memory address which saved the value of ptr1) = %p\n", ptr1);
    printf("The memory address of pointer ptr1 = %p\n\n", &ptr1);

    printf("**ptr2 (The value of ptr2) = %d\n", **ptr2);
    printf("*ptr2 (The memory address which saved the value of ptr2)= %p\n", *ptr2);
    printf("The memory address of pointer ptr2  = %p\n\n", &ptr2);

    puts("Sort out : ");
    printf("&p = %p\tprt1 = %p\n", &p, ptr1);
    printf("&ptr1 = %p\tprt2 = %p\n", &ptr1, ptr2);

    return 0;
}

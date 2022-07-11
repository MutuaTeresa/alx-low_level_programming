#include "main.h"
#include <stdio.h>

/**
 * main - reseting the value the pointer is pointing to
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
int *n;

i = 0;
n = &i;
printf("i=%d\n", i);
reset_to_98(&i);
*n = 98;
printf("n=%d\n", n);
return (0);
}

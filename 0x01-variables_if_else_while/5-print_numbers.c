#include <stdio.h>
/**
 *main - function that prints all decimal numbers starting from 0
 *Return: always 0 (succes)
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
printf("%d", num);
}
putchar('\n');
return (0);
}

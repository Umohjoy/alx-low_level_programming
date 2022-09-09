#include <stdib.h>
#include <time.h>
/**
*main-print if the number is positive, zero, or negative
*
* Description: using the main funtion
* this program prints "programming is postive, zero, or negative
* Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() -RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is postive\n", n);
}
else if(n == 0)
{
printf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}


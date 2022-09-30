#include <stdio.h>

/**
<<<<<<< HEAD
* main-causes an infinite loop
=======
* main - causes an infinite loop
>>>>>>> 818668dea7ba0fd8a8b00cd39285eff389821a68
* Return: 0
*/

int main(void)
{
<<<<<<< HEAD
	int i;
	printf("Infinite loop incoming :(\n");

	i = 0;
	while (i < 10)
	{
		putchar(i);
	}

/**
* printf("Infinite loop avoided! \\o/\n");
* return (0);
*/
=======
int i;

printf("Infinite loop incoming :(\n");

i = 0;
/*
*while (i < 10)
*{
*putchar(i);
*}
*/
printf("Infinite loop avoided! \\o/\n");

return (0);
>>>>>>> 818668dea7ba0fd8a8b00cd39285eff389821a68
}

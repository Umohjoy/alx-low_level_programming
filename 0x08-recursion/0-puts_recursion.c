#include "main.h"
/**
*_putchar_recursion-prints a string following by a new line
* @s:string to be printed
* Return:0
*/
void _puts_recursion(char *s);
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(s[0]);
puts_recursion(s + 1);
}
}			

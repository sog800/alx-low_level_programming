#include "main.h"
void copy(char str1[], char str2[], int index);
char *reverse(char *s);

/**
 * is_palindrome - palindrome
 * @s: string
 *
 * Return: 1 if is palindrome else 0
 */
int is_palindrome(char *s)
{
	char a[100];

	copy(s, a, 0);
	reverse(s);
	if (*s == *a)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * reverse - reverse
 * @s:string
 *
 * Return: a string
 */
char *reverse(char *s)
{
	char temp;

	if (*s != '\0')
	{
		reverse(s + 1);
		temp = *s;
		*s = s[0];
		s[0] = temp;
	}
	return (s);
}
/**
 * copy - copy
 * @str1: string
 * @str2: string
 * @index: index
 */
void copy(char str1[], char str2[], int index)
{
	if (str1[index] != '\0')
	{
		str2[index] = str1[index];
		copy(str1, str2, index + 1);
	}
}

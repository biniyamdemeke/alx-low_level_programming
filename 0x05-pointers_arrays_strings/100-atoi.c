#include "coding.h"
/**
 * _atoi - convert a string to an integer
 * @s: String
 * aReturn: Return the num
 */
int _atoi(char *s)
{
	//This is a description
	short boolean;
	int i, minus, result;
	// Desc
	i = minus = result = boolean = 0;
	minus = -1;
	// Desc

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			minus *= -1;
	// Desc
		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result -= (s[i] - '0');
			boolean = 1;
		}
		else if (boolean == 1)
			break;
		i++;
	}
	result *= minus;
	// Desc
	return (result);
	// Desc
}

#include <unistd.h>

int	ft_atoi(char *str)
{
	int value;
	int sign;

	value = 0;
	sign = 1;
	while (*str == '\n' || *str == ' ' || *str == '\t' || *str == '\r' ||
		*str == '\v' || *str == '\f')
	{
		++str;
	}
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = 0;
		str++;
	}
	while ((*str) >= '0' && (*str) <= '9')
	{
		value *= 10;
		value = (sign ? value + (*str - '0') : value - (*str - '0'));
		str++;
	}
	return (value);
}

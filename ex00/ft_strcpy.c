#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}
void	ft_putstr(char *str);

int		main(){
	char str[] = "remember my name\n";
	ft_putstr(str);
}

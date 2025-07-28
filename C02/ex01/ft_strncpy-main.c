#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;
	i = 0;
	while (str[i] != 0)
	{
		write(1,&str[i],1);
		i++;
	}
}

int main()
{
	char *str = "===========================================\n";
	char src1[] = "salah koulal\n";
	char dest1[20];

	unsigned int n;
	n = 5;
	ft_putstr(str);
	ft_putstr(src1);
	ft_strncpy(dest1, src1, n);
	ft_putstr(dest1);
	write(1, "\n", 1);
	ft_putstr(str);
	return (0);
}

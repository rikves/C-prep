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

int	main()
{
	char	str[] = "=============================================================\n";
	char	*walo = "NULL TEST! NO DISPLAY IN STDOUT.\n";
	char	src1[] = "salah\n";
	char	dest1[30];
	char	*src2 = "";
	char	dest2[200];
	char	src3[] = "Future is loading\n";
	char	dest3[] = "\0";
	ft_putstr(str);
	ft_putstr(src1);
	ft_strcpy(dest1, src1);
	ft_putstr(dest1);

	ft_putstr(str);
	ft_putstr(src2);
	ft_strcpy(dest2, src2);
	ft_putstr(walo);
	ft_putstr(dest2);
	ft_putstr(str);
	ft_strcpy(dest3, src3);
	ft_putstr(dest3);
	ft_putstr(str);
	return 0;
}

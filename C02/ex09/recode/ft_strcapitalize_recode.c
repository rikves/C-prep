#include <stdio.h>

char	*ft_strlowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return str;
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	case_flag;

	i = 0;
	case_flag = 1;
	ft_strlowercase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (case_flag == 1)
			{
				str[i] -= 32;
				case_flag = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			case_flag = 0; // in the case of string alphanumric 42mots it will encounters 4 then toggle to 0(other case) 1(to upper the next char)
		}
		else
		{
			case_flag = 1;
		}
		i++;
	}
	return (str);
}

int	main(int	ac, char **av)
{
	char *str =  av[1];

	printf("%s\n",ft_strcapitalize(str));
}

#include <stdio.h>


int	ft_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}


char	*ft_strrev(char *str)
{
	int i = 0;
	int j;

	j = ft_strlen(str);
	j--;
	char swp;
	while (i < j)
	{
		swp = str[i];
		str[i] = str[j];
		str[j] = swp;
		i++;
		j--;
	}
	return (str);
}

int main()
{
	char str[] = "halas";
	printf("%s\n",ft_strrev(str));

}

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <='z')
		{
			str[i] = str[i] -32;
		}
		else if (!(str[i] >= 'a' && str[i] <='z' || str[i] >= 'A' && str[i] <= 'Z' || str[i] >= '0' && str[i] <= '9'))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{	
			str[i+1] = str[i+1] -32;
			}
		}
		i++;	
	}
	return (str);
}

int	main(void)
{
	char	str[] = "guilherm,e 21gome+s da si+lva";
	
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}

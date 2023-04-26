#include <unistd.h>

void ft_print_numbers(void)
{
	int		numberStart;
	int		numberEnd;
	char	number;
	
	numberStart = '0';
	numberEnd = '9';
	while (numberStart <= numberEnd)
	{
		number = (char)numberStart;
		write(1, &number, 1);
		numberStart++;
	}
}

int main()
{
	ft_print_numbers();
}

#include <unistd.h>

void ft_print_comb(void)
{
	char	nb1;
	char	nb2;
	char	nb3;

	nb1 = '0';
	nb2 = '0';
	nb3 = '0';
	while (nb1 != '7' && nb2 != '8' && nb3 != '9')
	{
		if (nb3 == nb2 || nb3 == nb1)
			(int)nb3++;
		else if (nb2 == nb3 || nb2 == nb1)
			(int)nb2++;
		else if (nb1 == nb3 || nb1 == nb2)
			(int)nb1++;
		else
		{
			nb3++;
		}	
		
		write(1, &nb1, 1);
		write(1, &nb2, 1);
		write(1, &nb3, 1);
		write(1, ", ", 2); 			
	}
}

int main()
{
	ft_print_comb();
}

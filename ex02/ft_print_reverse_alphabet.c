#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	int		letterStart;
	int		letterEnd;
	char	letter;
	
	letterStart = 97;
	letterEnd = 122;
	while (letterEnd >= letterStart)
	{
		letter = (char)letterEnd;
		write(1, &letter, 1);
		letterEnd--;
	}
}

int main()
{
	ft_print_reverse_alphabet();
}

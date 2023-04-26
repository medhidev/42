#include <unistd.h>

void ft_print_alphabet(void)
{
	int		letterStart;
	int		letterEnd;
	char	letter;
	
	letterStart = 97;
	letterEnd = 122;
	while (letterStart <= letterEnd)
	{
		letter = (char)letterStart;
		write(1, &letter, 1);
		letterStart++;
	}
}

int main()
{
	ft_print_alphabet();
}

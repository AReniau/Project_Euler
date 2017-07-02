#include <unistd.h>

void	print_char(char c)
{
	write(STDIN_FILENO, &c, 1);
}
void	print_number(int number)
{
	if(number >= 10)
	{
		print_number(number / 10);
		print_number(number % 10);
	}else
		print_char(number + 48);
}

void	mult_3and5(void)
{
	int	n;
	int 	x;

	n = 1;
	x = 1;
	while(x <= 9)
	{
		while(n < 1000)
  	 	{
			if((n = 3 * x) || (n = 5 * x))
			{
				print_number(n);
				print_char(' ');
				x = x + 1;
			}
		}
		x = 0;
		n = n + 1;
	}
}

int main(void)
{
	mult_3and5();
	
	return (0);
}

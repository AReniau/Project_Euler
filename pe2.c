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

void	fibo(void)
{
	int	fiboa;
	int	fibob;
	int	fibo;
	int	i;

	fiboa = 1;
	fibob = 2;
	i = 0;
	while(i <= 42)
	{
		fibo = fiboa + fibob;
		print_number(fibo);
		print_char('\n');
		fiboa = fibob;
		fibob = fibo;
		i = i + 1;
	}
}

int main(void)
{
	fibo();

	return(0);
}

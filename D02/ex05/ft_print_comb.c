#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_put_multi_char(char a, char b, char c)
{
		ft_putchar(a);
		ft_putchar(b);
		if ( c != 0)
			ft_putchar(c);
}

void	ft_print_comb(void)
{
		int a;
		int b;
		int c;

		a = '0';
		while(a <= '7')
		{
			b = a + 1;
			while(b <= '8')
			{
				c = b + 1;
				while(c <= '9')
				{
					ft_put_multi_char(a,b,c);
					if((a != '7') || (b != '8') || (c != '9'))
						ft_put_multi_char(',',' ', 0);
					c++;
				}
				b++;
			}
			a++;
		}
}

int		main()
{
	ft_print_comb();
	return(0);
}

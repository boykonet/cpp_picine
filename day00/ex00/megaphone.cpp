#include <iostream>

int			main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\a";
	else
	{
		while (argv[++i])
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
					std::cout << (char)toupper(argv[i][j]);
				else
					std::cout << argv[i][j];
				j++;
			}
		}
	}
	std::cout << std::endl;
	return (0);
}

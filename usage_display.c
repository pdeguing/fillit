#include "fillit.h"

int	usage_display(void)
{
	ft_putstr_fd("\nusage: ./fillit [input_file]\n\n", 2);
	ft_putstr_fd("Only '.' or '#' or '\\n' in [input_file].\n\n", 2);
	ft_putstr_fd("It should contain at most 26 tetrominos and only tetrominos.\n\n", 2);
	ft_putstr_fd("A tetromino is a string of 21 characters, ", 2);
	ft_putstr_fd("4 lines of 4 characters.\nIt is terminated by a final '\\n' ", 2);
	ft_putstr_fd("if followed by another tetromino.\n\n", 2);
	ft_putstr_fd("Each tetromino contains at most 4 '#', ", 2);
	ft_putstr_fd("the rest of the grid being '.',\nevery '#' must be connected ", 2);
	ft_putstr_fd("to another one by his sides.\n\n", 2);
	return (0);
}

clear
make
cc -Wall -Wextra -Werror ./tests/printf-tests/ft_printf_test.c libft.a -o libft -lbsd
./libft
make fclean

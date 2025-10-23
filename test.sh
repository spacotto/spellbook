clear
make all
cc -Wall -Wextra -Werror main_ft.c libft.a -o libft -lbsd 
./libft
make fclean

clear
make all
cc -Wall -Wextra -Werror main.c libft.a -o libft -lbsd 
./libft ##| cat -e
make fclean

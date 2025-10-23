/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:49:20 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/23 14:21:15 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	puts("\n================================= ft_substr.c\n");

	{
		char const *s = "0123456789 0123456789";
		unsigned int start = 4;
		size_t len = 3;
		char *str;

		puts("=== s len > start && len > ft_strlen(s + start)");
		str = ft_substr(s, start, len);
		printf("RESULT : %s\n\n", str);
		free(str);
	}
	
	{
		char const *s = "0123456789 0123456789";
		unsigned int start = 100;
		size_t len = 3;
		char *str;

		puts("=== start > s len");
		str = ft_substr(s, start, len);
		printf("RESULT : %s\n\n", str);
		free(str);
	}

	{
		char const *s = "0123456789 0123456789";
		unsigned int start = 3;
		size_t len = ft_strlen(s + start) + 10;
		char *str;

		puts("=== len > ft_strlen(s + start)");
		str = ft_substr(s, start, len);
		printf("RESULT : %s\n", str);
		free(str);
	}
	
	puts("\n================================= ft_strjoin.c\n");

	{
		char *s1 = "qwert";
		char *s2 = "asdfg";
		char *str;
		
		puts("=== BOTH EXIST");
		printf("s1 : %s | s2 : %s\n", s1, s2);	
		str = ft_strjoin(s1, s2);
		printf("RESULT : %s\n\n", str);
		free(str);
	}
		
	{
		char *s1 = "";
		char *s2 = "";
		char *str;

		puts("=== BOTH EMPTY");
		printf("s1 : %s | s2 : %s\n", s1, s2);	
		str = ft_strjoin(s1, s2);
		printf("RESULT : %s\n\n", str);
		free(str);
	}
		
	{
		char *s1 = "";
		char *s2 = "asdfg";
		char *str;

		puts("=== s1 EMPTY");
		printf("s1 : %s | s2 : %s\n", s1, s2);	
		str = ft_strjoin(s1, s2);
		printf("RESULT : %s\n\n", str);
		free(str);
	}
		
	{
		char *s1 = "qwert";
		char *s2 = "";
		char *str;

		puts("=== s2 EMPTY");
		printf("s1 : %s | s2 : %s\n", s1, s2);	
		str = ft_strjoin(s1, s2);
		printf("RESULT : %s\n\n", str);
		free(str);
	}
		
	puts("\n================================= ft_strtrim.c\n");

	{
		char *s1 = "---qwert---asdfg---zxcvb---yuiop---";
		char *set = "---";
		char *str;
		
		puts("=== SET @ START & END");
		printf("S1     | %s\nSET    | %s\n", s1, set);	
		str = ft_strtrim(s1, set);
		printf("RESULT | %s\n\n", str);
		free(str);
	}
			
	{
		char *s1 = "---qwert---asdfg---zxcvb---yuiop";
		char *set = "---";
		char *str;
		
		puts("=== SET @ START");
		printf("S1     | %s\nSET    | %s\n", s1, set);	
		str = ft_strtrim(s1, set);
		printf("RESULT | %s\n\n", str);
		free(str);
	}
			
	{
		char *s1 = "qwert---asdfg---zxcvb---yuiop---";
		char *set = "---";
		char *str;
		
		puts("=== SET @ END");
		printf("S1     | %s\nSET    | %s\n", s1, set);	
		str = ft_strtrim(s1, set);
		printf("RESULT | %s\n\n", str);
		free(str);
	}
			
	{
		char *s1 = "----qwert---asdfg---zxcvb---yuiopi----";
		char *set = "---";
		char *str;
		
		puts("=== OVERFLOWING SET (LONG)");
		printf("S1     | %s\nSET    | %s\n", s1, set);	
		str = ft_strtrim(s1, set);
		printf("RESULT | %s\n\n", str);
		free(str);
	}
			
	{
		char *s1 = "-qwert---asdfg---zxcvb---yuiop-";
		char *set = "---";
		char *str;
		
		puts("=== OVERFLOWING SET (SHORT)");
		printf("S1     | %s\nSET    | %s\n", s1, set);	
		str = ft_strtrim(s1, set);
		printf("RESULT | %s\n\n", str);
		free(str);
	}
			
	{
		char *s1 = "-*--qwert---asdfg---zxcvb---yuiop--*-";
		char *set = "---";
		char *str;
		
		puts("=== BROKEN SET");
		printf("S1     | %s\nSET    | %s\n", s1, set);	
		str = ft_strtrim(s1, set);
		printf("RESULT | %s\n\n", str);
		free(str);
	}
			
	{
		char *s1 = "";
		char *set = "asdfg";
		char *str;
		
		puts("=== EMPTY S1");
		printf("S1     | %s\nSET    | %s\n", s1, set);	
		str = ft_strtrim(s1, set);
		printf("RESULT | %s\n\n", str);
		free(str);
	}
	
	{
		char *s1 = "qwert asdfg zxcvb";
		char *set = "";
		char *str;
		
		puts("=== EMPTY SET");
		printf("S1     | %s\nSET    | %s\n", s1, set);	
		str = ft_strtrim(s1, set);
		printf("RESULT | %s\n\n", str);
		free(str);
	}
		
	{
		char *s1 = "";
		char *set = "";
		char *str;
		
		puts("=== BOTH EMPTY");
		printf("S1     | %s\nSET    | %s\n", s1, set);	
		str = ft_strtrim(s1, set);
		printf("RESULT | %s\n\n", str);
		free(str);
	}
		
	{
		char *s1 = "qwert asdfg zxcvb";
		char *set = "000000";
		char *str;
		
		puts("=== SET ABSENT");
		printf("S1     | %s\nSET    | %s\n", s1, set);	
		str = ft_strtrim(s1, set);
		printf("RESULT | %s\n\n", str);
		free(str);
	}
		
	
	puts("\n================================= ft_split.c\n");
	
	{
		char *s = "-qwert-asdfg-zxcvb-yuiop-";
		char c = '-';
		char **array;
		size_t i = 0;

		puts("=== DIV START, MIDDLE & END");
		printf("STRING  | %s\nDIVIDER | %c\n\n", s, c);
		array = ft_split(s, c);
		while (array[i] != NULL)
		{
			printf("WORD %lu | %s\n", i + 1, array[i]);
			i++;
		}
		while (array[i])
		{
			free(array[i]);
			i++;
		}
		free(array);
	} 
 	
	{
		char *s = "-qwert-asdfg-zxcvb-yuiop";
		char c = '-';
		char **array;
		size_t i = 0;
			
		puts("\n=== DIV START & MIDDLE");
		printf("STRING  | %s\nDIVIDER | %c\n\n", s, c);
		array = ft_split(s, c);
		while (array[i])
		{
			printf("WORD %lu | %s\n", i + 1, array[i]);
			i++;
		}
		while (array[i])
		{
			free(array[i]);
			i++;
		}
		free(array);
	} 
 	
	{
		char *s = "qwert-asdfg-zxcvb-yuiop-";
		char c = '-';
		char **array;
		size_t i = 0;
		
		puts("\n=== DIV MIDDLE & END");
		printf("STRING  | %s\nDIVIDER | %c\n\n", s, c);
		array = ft_split(s, c);
		while (array[i])
		{
			printf("WORD %lu | %s\n", i + 1, array[i]);
			i++;
		}
		while (array[i])
		{
			free(array[i]);
			i++;
		}
		free(array);
	} 
 
	{
		char *s = "qwert-asdfg-zxcvb-yuiop-";
		char c = '\0';
		char **array;
		size_t i = 0;
		
		puts("\n=== NUL DIV");
		printf("STRING  | %s\nDIVIDER | %c\n\n", s, c);
		array = ft_split(s, c);
		while (array[i])
		{
			printf("WORD %lu | %s\n", i + 1, array[i]);
			i++;
		}
		while (array[i])
		{
			free(array[i]);
			i++;
		}
		free(array);
	} 
 
	{
		char *s = "";
		char c = '-';
		char **array;
		size_t i = 0;
		
		puts("\n=== EMPTY S");
		printf("STRING  | %s\nDIVIDER | %c\n", s, c);
		array = ft_split(s, c);
		while (array[i])
		{
			printf("WORD %lu | %s\n", i + 1, array[i]);
			i++;
		}
		while (array[i])
		{
			free(array[i]);
			i++;
		}
		free(array);
	} 
	
	{
		char *s = "----------";
		char c = '-';
					
		puts("\n=== ONLY SEP");
		printf("STRING  | %s\nDIVIDER | %c\n", s, c);
		printf("WORD (null)\n");
	} 
	
	puts("\n================================= ft_itoa.c - NOT OK!\n");

	{
		int n = 1234567890;
		char *s;

		puts("=== ALL DIGITS");
		printf("NUMBER | %d\n", n);
		s = ft_itoa(n);
		printf("RESULT | %s\n", s);
		free(s);
	}
 
	{
		int n = -1234567890;
		char *s;

		puts("\n=== NEGATIVE NUMBER");
		printf("NUMBER | %d\n", n);
		s = ft_itoa(n);
		printf("RESULT | %s\n", s);
		free(s);
	}
 
	{
		int n = 2147483647;
		char *s;

		puts("\n=== INT MAX");
		printf("NUMBER | %d\n", n);
		s = ft_itoa(n);
		printf("RESULT | %s\n", s);
		free(s);
	}
 
	{
		int n = -2147483648;
		char *s;

		puts("\n=== INT MIN");
		printf("NUMBER | %d\n", n);
		s = ft_itoa(n);
		printf("RESULT | %s\n", s);
		free(s);
	}
 
	{
		int n = 0;
		char *s;

		puts("\n=== ZERO");
		printf("NUMBER | %d\n", n);
		s = ft_itoa(n);
		printf("RESULT | %s\n", s);
		free(s);
	}
 
	puts("\n================================= ft_strmapi.c\n");
/*
	{
		char *s = "Hello world!";
		char *d = ft_strmapi(s, &ft_toupper);
		printf("STRING | %s\nFUNCTION | TO UPPER\n", s);
		printf("RESULT |  %s\n", d);
		free(d);
	}
	
	puts("\n================================= ft_striteri.c\n");

	{
		char *s = "Hello world!";
		printf("STRING | %s\nFUNCTION | TO UPPER\n", s);
		printf("RESULT |  %s\n", ft_striteri(s, &ft_isalpha));
	}
*/
	ft_putendl_fd("\n================================= ft_putchar_fd.c\n", 1);
	
	{
		ft_putendl_fd("=== INSERT CHAR", 1);
		ft_putchar_fd('3', 1);
		ft_putendl_fd("", 1);
	}
	
	ft_putendl_fd("\n================================= ft_putstr_fd.c\n", 1);

	{
		ft_putendl_fd("=== INSERT STR", 1);
		ft_putstr_fd("Hello World!\n", 1);
	}
	
	ft_putendl_fd("\n================================= ft_putendl_fd.c\n", 1);

	{
		ft_putendl_fd("=== INSERT STR", 1);
		ft_putendl_fd("Hello World!", 1);
	}
	
	ft_putendl_fd("\n================================= ft_putnbr_fd.c\n", 1);

	{
		ft_putendl_fd("=== ALL DIGITS", 1);
		ft_putnbr_fd(1234567890, 1);
		ft_putendl_fd("\n", 1);
	}
	
	{
		ft_putendl_fd("=== INT_MAX", 1);
		ft_putnbr_fd(2147483647, 1);
		ft_putendl_fd("\n", 1);
	}
	
	{
		ft_putendl_fd("=== INT_MIN", 1);
		ft_putnbr_fd(-2147483648, 1);
		ft_putendl_fd("\n", 1);
	}
	
	{
		ft_putendl_fd("=== SINGLE DIGIT", 1);
		ft_putnbr_fd(9, 1);
		ft_putendl_fd("\n", 1);
	}

	{
		ft_putendl_fd("=== ZERO", 1);
		ft_putnbr_fd(0, 1);
		ft_putendl_fd("\n", 1);
	}

	return(0);
}

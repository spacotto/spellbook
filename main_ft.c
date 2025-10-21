/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:49:20 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/21 23:49:19 by spacotto         ###   ########.fr       */
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
		
	puts("\n================================= ft_strtrim.c (NOT OK)\n");

	{
		char *s1 = "qwert---asdfg---zxcvb---yuiop";
		char *set = "---";
		char *str;
		
		puts("=== BOTH EXIST");
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
		free(array);
	} 
	
	{
		char *s = "----------";
		char c = '-';
					
		puts("\n=== ONLY SEP");
		printf("STRING  | %s\nDIVIDER | %c\n", s, c);
		printf("WORD (null)");
	} 
 
	return(0);
}

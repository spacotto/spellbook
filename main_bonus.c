/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:39:49 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/27 18:23:51 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

static void	del(void *data)
{
	if (data)
		free (data);
}

static void	ft_lstiter_helper(void *content)
{
	char *s = (char *)content;
	if (s)
	{
		while (*s)
		{
			*s = ft_toupper((size_t)*s);
			s++;
		}
	}
}

int	main()
{
	puts("\n================================= ft_lstnew.c\n");

	{
		int n = 42; 
		//fill the content(void)
		//malloc if using more than char or int
		t_list *node = ft_lstnew(&n);
		printf("NODE CONTENT : %d\n",*(int*)(node->content));
		free(node);
	}

	puts("\n================================= ft_lstadd_front.c\n");
	
	{
		puts("=== ADD TO EMPTY LIST");
		
		t_list *head = NULL;
		t_list *node = ft_lstnew("content"); 
			
		ft_lstadd_front(&head, node);
		int check = (head == node && head->next == NULL);
		printf("RESULT? %s\n", check ? "OK!" : "KO!");		
		free(node);
	}

	{
		puts("\n=== ADD TO NON EMPTY LIST");
		
		t_list *node = ft_lstnew("content"); 
		t_list *head = node;
		t_list *add = ft_lstnew("content"); 
			
		ft_lstadd_front(&head, add);
		int check = (head == add && head->next == node);
		printf("RESULT? %s\n", check ? "OK!" : "KO!");
		free(node);
		free(add);
	}

	{
		puts("\n=== ADD EMPTY NODE");
		
		t_list *node = ft_lstnew("content");
		t_list *head = NULL; 
		t_list *add = NULL;

		ft_lstadd_front(&head, add);
//		int check = (head == add 
//						&& head->next == node
//						&& head->next->next == NULL);
//		printf("RESULT? %s\n", check ? "OK!" : "KO!");
		free(node);
		free(add);
	}

	{
		puts("\n=== KEEP ADDING NODES");
		
		t_list *head = NULL;
		t_list *node_1 = ft_lstnew("A"); 
		t_list *node_2 = ft_lstnew("B"); 
		t_list *node_3 = ft_lstnew("C"); 
			
		ft_lstadd_front(&head, node_1);
		ft_lstadd_front(&head, node_2);
		ft_lstadd_front(&head, node_3);
		int check = (head == node_3
					 	&& head->next == node_2 
						&& head->next->next == node_1 
						&& head->next->next->next == NULL);
		printf("RESULT? %s\n", check ? "OK!" : "KO!");
		free(node_3);
		free(node_2);
		free(node_1);
	}

	puts("\n================================= ft_lstsize.c\n");

	{
		t_list *head = NULL;
		t_list *node_1 = ft_lstnew("A"); 
		t_list *node_2 = ft_lstnew("B"); 
		t_list *node_3 = ft_lstnew("C"); 
			
		ft_lstadd_front(&head, node_1);
		ft_lstadd_front(&head, node_2);
		ft_lstadd_front(&head, node_3);

		printf("LIST SIZE = %d\n", ft_lstsize(head));

		free(node_3);
		free(node_2);
		free(node_1);
	}
	 
	puts("\n================================= ft_lstlast.c\n");
	
	{
		t_list *head = NULL;
		t_list *node_1 = ft_lstnew("A"); 
		t_list *node_2 = ft_lstnew("B"); 
		t_list *node_3 = ft_lstnew("C"); 
			
		ft_lstadd_front(&head, node_1);
		ft_lstadd_front(&head, node_2);
		ft_lstadd_front(&head, node_3);

		ft_lstlast(head);
		printf("LAST NODE CONTENT = %c\n", *(char *)(node_3->content));

		free(node_1);
		free(node_2);
		free(node_3);
	}
 
	puts("\n================================= ft_lstadd_back.c\n");
	 
	{
		puts("=== ADD TO EMPTY LIST");
		
		t_list *head = NULL;
		t_list *add = ft_lstnew("content"); 
			
		ft_lstadd_back(&head, add);
		int check = (head == add && head->next == NULL);
		printf("RESULT? %s\n", check ? "OK!" : "KO!");		
		free(add);
	}

	{
		puts("\n=== ADD TO NON EMPTY LIST");
		
		t_list *node = ft_lstnew("content"); 
		t_list *head = node;
		t_list *add = ft_lstnew("content"); 
			
		ft_lstadd_back(&head, add);
		int check = (head == node 
						&& head->next == add 
						&& head->next->next == NULL);
		printf("RESULT? %s\n", check ? "OK!" : "KO!");
		free(add);
		free(node);
	}

	{
		puts("\n=== ADD EMPTY NODE");
		
		t_list *node = ft_lstnew("content");
		t_list *head = NULL; 
		t_list *add = NULL;

		ft_lstadd_back(&head, add);
		int check = (head == node && node->next == NULL);
		printf("RESULT? %s\n", check ? "OK!" : "KO!");
		free(node);
	}

	{
		puts("\n=== KEEP ADDING HEADS");
		
		t_list *head = NULL;
		t_list *node_1 = ft_lstnew("A"); 
		t_list *node_2 = ft_lstnew("B"); 
		t_list *node_3 = ft_lstnew("C"); 
			
		ft_lstadd_back(&head, node_1);
		ft_lstadd_back(&head, node_2);
		ft_lstadd_back(&head, node_3);

		int check = (head == node_1 
						&& head->next == node_2 
						&& head->next->next == node_3 
						&& head->next->next->next == NULL);
		printf("RESULT? %s\n", check ? "OK!" : "KO!");
		free(node_3);
		free(node_2);
		free(node_1);
	}

	puts("\n================================= ft_lstdelone.c\n");

	{
		char *s = ft_strdup("content");
		t_list *node = ft_lstnew(s);
		ft_lstdelone(node, del);
		printf("Check leaks with Valgrind: no leaks? OK!\n");
	}
	
	puts("\n================================= ft_lstclear.c\n");
	
	{
		char *s1 = ft_strdup("content");
		t_list *node_1 = ft_lstnew(s1);
		t_list *head = node_1;

		char *s2 = ft_strdup("content");
		t_list *node_2 = ft_lstnew(s2);
		ft_lstadd_back(&head, node_2);
		
		char *s3 = ft_strdup("content");
		t_list *node_3 = ft_lstnew(s3);
		ft_lstadd_back(&head, node_3);
		
		ft_lstclear(&head, del);	
		printf("Check leaks with Valgrind: no leaks? OK!\n");
	}

	puts("\n================================= ft_lstiter.c\n");

	{
		puts("\n=== MULTIPLE NODES");
		
		t_list *node_1 = ft_lstnew(ft_strdup("Hello")); 
		t_list *head = node_1;
		t_list *node_2 = ft_lstnew(ft_strdup("World!")); 
			
		ft_lstadd_back(&head, node_1);
		ft_lstadd_back(&head, node_2);

//		ft_lstiter(head, &ft_lstiter_helper);
		int check = (strcmp(node_1->content, "HELLO") == 0 && strcmp(node_2->content, "WORLD!") == 0);
		printf("RESULT? %s\n", check ? "OK!" : "KO!");
		free(node_2);
		free(node_1);
	}

	puts("\n================================= ft_lstmap.c\n");
	
	return (0);
}

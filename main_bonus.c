/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:39:49 by spacotto          #+#    #+#             */
/*   Updated: 2025/10/26 23:41:48 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	del_func(void *data)
{
	if (data)
		free(data);
}

void	*lstmap_helper(void *fuck)
{
	int *convert;

	convert = fuck;

	*convert = 42;

	return (fuck);
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
		t_list *new_head = ft_lstnew("content"); 
			
		ft_lstadd_front(&head, new_head);
		int check = (head == new_head && new_head->next == NULL);
		printf("RESULT? %s\n", check ? "OK!" : "KO!");		
		free(new_head);
	}

	{
		puts("\n=== ADD TO NON EMPTY LIST");
		
		t_list *head = NULL;
		t_list *node = ft_lstnew("content"); 
			
		ft_lstadd_front(&head, node);
		int check = (head == node && head->next == NULL);
		printf("RESULT? %s\n", check ? "OK!" : "KO!");
		free(node);
	}

	{
		puts("\n=== ADD EMPTY NODE");
		
		t_list *node = ft_lstnew("content");
		t_list *node_2 = NULL; 
		t_list *node_og = node;

		ft_lstadd_front(&node, node_2);
		int check = (node == node_og  && node->next == NULL);
		printf("RESULT? %s\n", check ? "OK!" : "KO!");
		free(node);
	}

	{
		puts("\n=== KEEP ADDING HEADS");
		
		t_list *head = NULL;
		t_list *node_1 = ft_lstnew("A"); 
		t_list *node_2 = ft_lstnew("B"); 
		t_list *node_3 = ft_lstnew("C"); 
			
		ft_lstadd_front(&head, node_1);
		ft_lstadd_front(&head, node_2);
		ft_lstadd_front(&head, node_3);
		int check = (head == node_3 && head->next == node_2 && head->next->next == node_1 && head->next->next->next == NULL);
		printf("RESULT? %s\n", check ? "OK!" : "KO!");
		free(node_3);
		free(node_2);
		free(node_1);
	}

	puts("\n================================= ft_lstsize.c\n");
	 
	puts("\n================================= ft_lstlast.c\n");
	 
	puts("\n================================= ft_lstadd_back.c\n");
	 
	puts("\n================================= ft_lstdelone.c\n");
	
	puts("\n================================= ft_lstclear.c\n");
	 
	puts("\n================================= ft_lstiter.c\n");
	 
	puts("\n================================= ft_lstmap.c\n");
	{
		t_list *list;
		int a = 3;
		list = ft_lstnew(&a);
		ft_lstmap(list, &lstmap_helper, &del_func);
	}
	 
	return (0);
}

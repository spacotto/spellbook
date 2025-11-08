/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arena.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:55:58 by spacotto          #+#    #+#             */
/*   Updated: 2025/11/08 15:44:20 by spacotto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define	PAGE_SIZE 4096

void	del(void *data)
{
	if (data)
		free(data);
}

// Initialize a new arena
t_arena	*arena_init(void)
{
	t_arena	*arena;
	void	*first_page;
	t_list	*first_node;

	// Create arena
	arena = ft_calloc(1, sizeof(t_arena);
	if (!arena)
		return (NULL);

	// Allocate 1st page	
	first_page = ft_calloc(PAGE_SIZE);
	if (!first_page)
	{
		free(arena);
		return (NULL);
	}

	// Create 1st node
	first_node = ft_lstnew(first_page);
	if (!first_node)
	{
		free(first_page);
		free(arena);
		return (NULL);
	}

	arena->pages = first_node;
	arena->current_page = first_page;
	arena->used_mem = 0;

	return (arena);
}

// Allocate memory from the arena
void	*arena_alloc(t_arena *arena, size_t size)
{
	void	*free_mem; // The address of the next available memory slot you're assigning
	void	*new_page;
	t_list	*new_node;
	
	if (!arena || size == 0 || size > PAGE_SIZE)
		return (NULL);
	
	// Check if allocation fits in current page
	if (arena->used_mem + size <= PAGE_SIZE)
	{
		free_mem = (char *)arena->current_page + arena->used_mem;
		arena->used_mem += size;
		return (free_mem);
	}
	
	// Need a new page
	new_page = ft_calloc(PAGE_SIZE);
	if (!new_page)
		return (NULL);
	
	new_node = ft_lstnew(new_page);
	if (!new_node)
	{
		free(new_page);
		return (NULL);
	}
	
	ft_lstadd_back(&arena->pages, new_node);
	arena->current_page = new_page;
	arena->used_mem = size;
	
	return (new_page);
}

// Reset arena (keep pages but reset offset to reuse memory)
void	arena_reset(t_arena *arena)
{
	if (!arena)
		return ;
	
	if (arena->pages)
		arena->current_page = arena->pages->content;
	arena->used_mem = 0;
}

// Free all arena memory
void	arena_free(t_arena *arena)
{
	if (!arena)
		return ;
	
	ft_lstclear(&arena->pages, del);
	free(arena);
}

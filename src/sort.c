/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irsander <irsander@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:42:49 by irsander          #+#    #+#             */
/*   Updated: 2024/05/21 13:32:09 by irsander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    index_presort(t_list **head_list_a)
{
    t_list  *current_node;
    t_list  *next_node_check;

    current_node = *head_list_a;
    next_node_check = *head_list_a;
    while (current_node)
    {
        while (next_node_check)
        {
            if (current_node->num < next_node_check->num)
                next_node_check->presort++;
            next_node_check = next_node_check->next;
        }
        current_node = current_node->next;
        next_node_check = *head_list_a;
    }
}

void    sort(t_list **head_list_a, t_list **head_list_b)
{
    int amount_of_nodes;
    
    amount_of_nodes = node_count(head_list_a);
    if (amount_of_nodes <= 3)
        three_sort(head_list_a);
    if (amount_of_nodes == 4 || amount_of_nodes == 5)
        five_sort(head_list_a, head_list_b);
    if (amount_of_nodes > 5)
        radix_sort(head_list_a, head_list_b);
}

void    three_sort(t_list **head_list_a)
{
    t_list  *current;
    int     max_presort;
    
    max_presort = find_max_presort(head_list_a);
    while (a_is_sorted(head_list_a) == false)
    {
        current = *head_list_a;
        if (current->presort == max_presort)
            rotate_a(head_list_a);
        else if (current->next && current->next->presort == max_presort)
            reverse_rotate_a(head_list_a);
        if (current->next && current->presort > current->next->presort)
            swap_a(head_list_a);
    }
}

void    five_sort(t_list **head_list_a, t_list **head_list_b)
{
    t_list  *current;
    int     amount_of_nodes;

    amount_of_nodes = node_count(head_list_a);
    while (a_is_sorted(head_list_a) == false)
    {
        while (amount_of_nodes > 0)
        {
            current = *head_list_a;
            if (current->presort == 0 || current->presort == 1)
                push_b(head_list_a, head_list_b);
            else
                rotate_a(head_list_a);
            amount_of_nodes--;
        }
        three_sort(head_list_a);
        push_a(head_list_b, head_list_a);
        push_a(head_list_b, head_list_a);
        if (current && current->next && (current->presort > current->next->presort))
            swap_a(head_list_a);
    }
}

void    radix_sort(t_list **head_list_a, t_list **head_list_b)
{
    int bit;
    int amount_of_nodes;

    bit = 1;
    while (a_is_sorted(head_list_a) == false || head_list_b != NULL)
    {
        amount_of_nodes = node_count(head_list_a);
        while (amount_of_nodes > 0)
        {
            if ((*head_list_a)->presort & bit)
                rotate_a(head_list_a);
            else
                push_b(head_list_a, head_list_b);
            amount_of_nodes--;
        }
        bit = bit << 1;
        while (*head_list_b != NULL)
            push_a(head_list_b, head_list_a);
    }
}

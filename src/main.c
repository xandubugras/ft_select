/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubugra <adubugra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 11:56:30 by adubugra          #+#    #+#             */
/*   Updated: 2018/05/10 20:16:10 by adubugra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_select.h"

int		main(int argc, char **argv)
{
	t_terminal		t;
	t_elem			*root;

	if (argc < 2 || set_terminal(&t) < 0)
		return (1);
	t.prev_term = t.term;
	prev_term = t.prev_term;
	init_signal_handlers();
	root = create_list(argc, argv);
	clear_scrn(t);
	root = handle_keys(root, &t);
	clear_scrn(t);
	retrieve_terminal(prev_term);
	print_selected(root);
	while ((root = remove_list(root)) != NULL)
		;
	return (0);
}

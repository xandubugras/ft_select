/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubugra <adubugra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 19:16:03 by adubugra          #+#    #+#             */
/*   Updated: 2018/05/10 20:22:37 by adubugra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_select.h"

static void		signal_handler(int sig)
{
	sig = 0;
	retrieve_terminal(prev_term);
	exit(0);
}

void			init_signal_handlers(void)
{
	signal(SIGABRT, signal_handler);
	signal(SIGINT, signal_handler);
	signal(SIGSTOP, signal_handler);
	signal(SIGKILL, signal_handler);
	signal(SIGQUIT, signal_handler);
}

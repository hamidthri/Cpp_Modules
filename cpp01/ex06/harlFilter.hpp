/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harlFilter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:41:09 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/13 18:47:09 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARLFILTER_HPP
# define HARLFILTER_HPP

#include <iostream>

class harlFilter
{
	private:
		void	debug( void );
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		harlFilter();
		~harlFilter();
		void	complain(std::string level );
};

#endif
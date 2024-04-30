/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:46:33 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/30 19:58:27 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>

class RPN
{
    private:
        std::stack<float> _con;
    public:
        RPN();
        RPN(std::string str);
        ~RPN();
        RPN(const RPN &other);
        RPN &operator=(const RPN &other);

        void inputParser(std::string str);
};


#endif
